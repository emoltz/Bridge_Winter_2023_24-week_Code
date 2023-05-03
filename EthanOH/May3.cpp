#include <iostream>
#include <stack>
#include <deque>
#include <queue>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>
#include <cmath>
using namespace std;

#define RED 0
#define BLACK 1

template <class T>
class RBTNode{
public:
    RBTNode<T> *parent, *left, *right;
    T data;
    int color;

    RBTNode(T data) : data(data), color(RED), parent(nullptr), left(nullptr), right(nullptr){};
};

template <class T>
class RBT{
public:
    RBTNode<T> *root;

    RBT() : root(nullptr) {}

    // insert would check to see if there is a tree, then if no tree, insert as root and set children/parent pointers to null
};



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

int main(){
    vector<int> v;
    v.push_back(50);
    v.push_back(10);

    vector<int>::iterator itr;

    for (itr = v.begin(); itr != v.end(); itr++){
        cout << *itr << endl;
    }

    cout << endl;

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }



    return 0;
}