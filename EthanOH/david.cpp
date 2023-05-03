#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// getline, starts where you left off.

class Person {
private:
    string personName;
    double amountPaid;

public:
    Person() : personName(""), amountPaid(0.0) {}

    Person(string newName, double newAmountPaid) : personName(newName), amountPaid(newAmountPaid) {}

    string getPersonName() { return personName; }

    void setPersonName(string newName) { personName = newName; }

    double getAmountPaid() { return amountPaid; }

    void setAmountPaid(double NewAmountPaid) { amountPaid = NewAmountPaid; }

    friend istream &operator>>(istream &ins, Person &person);

    void setNameAndPaidAmount() {}
};

istream &operator>>(istream &ins, Person &person) {
    ins >> person.personName >> person.amountPaid;
    return ins;
}

// declaration of linkedlist class
template<class T>
class LinkedList;

template<class T>
class personNode {
    // making data a pointer is more convenient when storing data?
public:
    T data;
    personNode<T> *next;

    personNode(T newdata = T(), personNode<T> *newNext = nullptr)
            : data(newdata), next(newNext) {}

    // each node contains a data and next mem. variable that is private.
    //  LinkedList class needs to be able to access data, and next.
    //  By making LinkedList class a friend of Node Class we grant the LinkedList class access to data, next.
    friend class LinkedList<T>;
};

template<class T>
class LinkedList {
    personNode<T> *head;

public:
    LinkedList() : head(new personNode<T>(T(), nullptr)) {}

    // ~LinkedList() {clear();}
    bool isEmpty() const { return head->next == nullptr; }

    void insertNodes(T newdata);

    int size();

    personNode<T> *getHead() const { return head; }
};

template<class T>
//
void LinkedList<T>::insertNodes(T newdata) {
    personNode<T> *newNode = new personNode<T>(newdata);
    if (isEmpty()) {
        head->next = newNode;
        return;
    }
    personNode<T> *current = head;

    while (current->next != nullptr) {
        current = current->next;
    }

    current->next = newNode;
}

template<class T>
int LinkedList<T>::size() {
    int count = 0;
    personNode<T> *current = head->next;

    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

void openInputFile(ifstream &inFile) {
    string filename;
    cout << "Insert the filename you would like to open: ";
    cin >> filename;
    inFile.open(filename);

    while (!inFile) {
        cout << "Bad filename! " << endl;
        cout << "What filename would you like to open: ";
        cin >> filename;
        inFile.clear();
        inFile.open(filename);
    }
}

/*
LinkedList will take in an Person object, and use that Person object to construct the personNode

the personNode also takes in the person object to construct the personNode


*/

int numOfPersonNotReachTargetValue(personNode<Person> *head, double targetValue) {
    int numOfPersonNotReachedTargetValue = 0;
    personNode<Person> *current = head->next;
    while (current != nullptr) {
        if (current->data.getAmountPaid() != targetValue) {
            numOfPersonNotReachedTargetValue++;
        }
        current = current->next;
    }
    return numOfPersonNotReachedTargetValue;
}

int main() {
    ifstream inFile;
    openInputFile(inFile);
    LinkedList<Person> personLinkedList;
    Person tempPerson;
    // >> operator automatically skips whitespace character(spaces, tabs , nl)
    string tempName = "";
    double tempAmountPaid = 0.0;
    double totalSum = 0.0;
    double targetValue = 0.0;

    while (inFile >> tempAmountPaid) {
        // getline begins reading where it left off. In this case it left off at amountPaid
        inFile.ignore(9999, ' '); // ignore until space character
        getline(inFile, tempName);
        // cout << tempAmountPaid << tempName << endl;
        totalSum += tempAmountPaid;
        Person tempPerson(tempName, tempAmountPaid);
        personLinkedList.insertNodes(tempPerson);
    }

    cout << "There are " << personLinkedList.size() << " people." << endl;
    targetValue = totalSum / personLinkedList.size();

    cout << "targetValue to reach : " << targetValue << endl;
    cout << endl;

    cout << "check how many people are in the linkedlist " << endl;
    personNode<Person> *head = personLinkedList.getHead();
    personNode<Person> *current = head->next;

    while (current != nullptr) {
        cout << current->data.getPersonName() << " amountPaid : " << current->data.getAmountPaid() << endl;
        current = current->next;
    }
    cout << endl;

    int totalAmountOfPeople = personLinkedList.size();
    // if all person hits targetValue then we stop
    while (numOfPersonNotReachTargetValue(personLinkedList.getHead(), targetValue) != totalAmountOfPeople) {
        personNode<Person> *head = personLinkedList.getHead();
        personNode<Person> *giver = head->next;
        personNode<Person> *reciever = head->next;
        double maxGiveValue = 0.0;
        // finds a giverNode that paid less than targetVal
        while (giver != nullptr) {
            if (giver->data.getAmountPaid() < targetValue) {
                double giverAmountPaid = giver->data.getAmountPaid();
                maxGiveValue = targetValue - giverAmountPaid;
                break; // stops when we find the giver node
            }
            giver = giver->next;
        }

        // need to findBestRecievingTarget: if reciever takes x <= maxGiveValue could put them to targetValue
        while (reciever != nullptr) {
            if (reciever->data.getAmountPaid() > targetValue) {
                double recieverAmountPaid = reciever->data.getAmountPaid();
                double newRecieverAmountPaid = recieverAmountPaid - maxGiveValue;
                if (newRecieverAmountPaid <= targetValue)
                    break;
            }
            reciever = reciever->next;
        }

        // at this point we find a viable reciever and giver.
        cout << "who is the giver: " << giver->data.getPersonName() << endl;
        cout << "who is the reciever: " << reciever->data.getPersonName() << endl;

        if (giver != nullptr && reciever != nullptr) {
            // offset: the amount needed from maxGiveAmount
            double offset = reciever->data.getAmountPaid() - targetValue;
            string giverName = giver->data.getPersonName();
            string recieverName = reciever->data.getPersonName();

            cout << giverName << ", "
                 << "you give " << recieverName << " $" << offset << endl;
            // recievers subtract by the offset, givers add by the offset.
            double newGiverAmountPaid = giver->data.getAmountPaid() + offset;
            giver->data.setAmountPaid(newGiverAmountPaid); // Updating giver's payment

            double newRecieverAmountPaid = reciever->data.getAmountPaid() - offset;
            reciever->data.setAmountPaid(newRecieverAmountPaid); // Updating receiver's payment
        }

    }

    inFile.close();
    return 0;
}