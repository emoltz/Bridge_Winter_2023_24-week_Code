#include <iostream>

using namespace std;

class Node;

class LinkedList;

class Node {
private:
    int _data;
public:
    string _name;
    bool _cool;
    Node *_next;
    Node *_prev;

    void setData(int n) {
        _data = n;
    }

    int getData() {
        return _data;
    }
};

class LinkedList {
private:
    Node *_head;
    Node *_tail;
public:

    LinkedList() {
        _head = nullptr;
        _tail = nullptr;
    }

    Node *front() {
        return _head;
    }

    Node *back() {
        return _tail;
    }

    void addNodeNoTail(int n) { //O(n)
        Node *temp = new Node;
        temp->setData(n);


        if (_head == nullptr) {
            _head = temp;
        } else {
            //there is a list... what do we do?
            // we have to go through the entire list! until we hit a nullptr
            Node *itr = _head;
            while (itr->_next != nullptr) {
                itr = itr->_next;
            }
            itr->_next = temp;
            temp->_next = nullptr;
        }
    }

    void addNode(int n, string newName) { //O(1)
        Node *temp = new Node;
        temp->setData(n);
        temp->_name = newName;

        if (_head == nullptr) {
            _head = temp;
            _tail = temp;
        } else {
            _tail->_next = temp;
            _tail = _tail->_next;
        }
    }

    void addNode(int n) {
        Node *temp = new Node;
        temp->setData(n);
        temp->_next = nullptr;

        //case 1: no list exists
        if (_head == nullptr) {
            _head = temp;
            _tail = temp;
        } else { //case 2: there is a list
            _tail->_next = temp;
            _tail = _tail->_next;
        }
    }

    void display() {
        Node *temp = _head;
        while (temp != nullptr) {
            cout << temp->getData() << endl;
            temp = temp->_next;
        }
    }

    bool didIBuy(string item) {
        Node *temp = _head;
        while (temp != nullptr) { // loops through every node in linked list
            if (temp->_name == item) {
                return true;
            } else {
                //continue
                temp = temp->_next;
            }
            return false;
        }
        return false;
    }

    int howManyDidIBuy(string item) {
        Node *temp = _head;
        int count = 0;
        while (temp != nullptr) { // loops through every node in linked list
            if (temp->_name == item) {
                count++;
            } else {
                temp = temp->_next;
            }
        }
        return count;
    }

    void displayRecursive(Node *temp) {
        //base case
        if (temp != nullptr) {
            cout << _head->getData() << endl;
            displayRecursive(temp->_next);
        }
    }
};

void instantiateNodes() {
    LinkedList aprilExpenses;
    // a file of numbers
    // while we can read that file, process each number

    aprilExpenses.addNode(10, "Lunch");
    aprilExpenses.addNode(100, "shoes");
    aprilExpenses.addNode(120, "shoes");
}

template <class T>
T add(T x, T y){
    return x + y;
}

template <class T, class L>
class Dog{
public:
    T data;
    Dog(T n){
        data = n;
    }
    L onestring;
    L name;
    T age;
};


template <class T>
class TemplateClass{
public:
    T data;
    string name;

    TemplateClass(T n, string newName){
        data =  n;
        name = newName;
    }
};

int main() {

    TemplateClass<int> newClass(5, "Shoes");

    double x = 10;
    double y = 100.32;
    add(x, y);
    int f = 100;
    int l = 450;
    add(f, l);

    return 0;
}