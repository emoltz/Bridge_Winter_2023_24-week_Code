#include <iostream>
using namespace std;

int increment(int n) {
    n++;
    return n;
}

void increment_ref(int& n) {
    n++;
}

void incrementTwoThings(int& n1, int& n2){
    n1++;
    n2++;
}

void main1(){
    int n = 5; //0
    int n2 = 5; //1
    int result1 = increment(n);
    increment_ref(n2);
    cout << "int function: " << result1 << endl;
    cout << "ref function: " << n2 << endl;

    cout << "n: " << n << endl;
    cout << "n2: " << n2;
}

// a function that can only effectively be done with pass by reference
void swap(int& a, int& b){
    // swap a and b
    int temp = a;
    a = b;
    b = temp;
}

void badSwap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void array1(){
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << endl;
}

int main() {
    array1();
    int a = 5;
    int b = 10;
    int* x = &a;
    cout << "x: " << *x << endl;
    *x = 100;

    cout << "x: " << *x << endl;
    cout << "a: " << a << endl;


    swap(a, b);
//    badSwap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;


    return 0;
}