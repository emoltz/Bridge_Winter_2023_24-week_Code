#include <iostream>
#include <vector>

using namespace std;

class Base {
public:
    Base() {}

    virtual void f() {
        cout << "BASE ";
    }
};

class Derived : public Base {
public:
    Derived() : Base() {}

    virtual void f() {
        cout << "Derived ";
    }
};

void q5() {
    vector<Base> base_objs;
    Base obj1 = Derived();
    Derived obj2 = Derived();
    Base obj3 = Base();

    base_objs.push_back(obj1);
    base_objs.push_back(obj2);
    base_objs.push_back(obj3);

    for (Base base_obj: base_objs) {
        base_obj.f();
    }

    obj1.f();
    obj2.f();
    obj3.f();
}

class A {

public:
    int x;
    int y;

    A() : x(0), y(0) {
        cout << "Default constructor" << endl;
    }

    A(int x, int y) : x(x), y(y) {
        cout << "Constructor with two values" << endl;
    }

    A(const A &other) {
        cout << "object copied!!" << endl;
        x = other.x;
        y = other.y;
    }
};

void q8() {
    A object1(1, 2);
    A object2 = object1;
    object1.x = 100;
//    cout << object1.x << endl << object2.x;
}

int main() {
    q8();
}