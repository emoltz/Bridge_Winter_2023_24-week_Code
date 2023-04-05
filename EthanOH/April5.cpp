#include <iostream>
#include <vector>

using namespace std;

class MyNumber {
private:
    int value;
public:

    class NestedClass {
    private:
        int value2;
        string name;
    public:
        NestedClass() {
            value2 = 0;
        }
    };


    MyNumber(int v) {
        NestedClass n;
        value = v;
    }

    MyNumber(long dollars, int cents) {
        //define what to do!
    }

    int getValue() {
        return value;
    }

    MyNumber &operator+=(const MyNumber &otherNumber) {
        this->value += otherNumber.value;
        return *this;
    }
};


int main() {
    MyNumber firstNum = 5;
    MyNumber secondNum = 10;
    firstNum += secondNum;

    cout << firstNum.getValue();
    return 0;
}