#include <iostream>
#include <cmath>

using namespace std;

// check to see if an array is sorted or not recursively
//base case: 1 element (or 0)
//start at end of array

bool isSorted(int S[], int length) {
    //base case STOP RECURSING IF THE ARRAY IS JUST ONE ITEM
    if (length == 1 || length == 0) {
        return true;
    }

    // recursive case check if the first element is greater than or equal to the second element
    if (S[0] >= S[1]) {
        return isSorted(S + 1, length - 1);
    }
    // STOP RECURSING IF: if there is a out of place number
    return false;
}

bool isSorted2(int S[], int length) {
    if (length == 1 || length == 0) {
        return true;
    } else {
        if (S[0] >= S[1]) {
            bool temp = isSorted(S + 1, length - 1);
            if (temp) {
                return true;
            }

        } else {
            return false;
        }
    }
    return false;
}

void test() {
    const int LENGTH = 8;
    int arr[LENGTH] = {100, 75, -27, 15, 8, -5, -5, -10}; // should be false
    cout << boolalpha << isSorted(arr, LENGTH);
}




int fib(int n) { //O(2^n)
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int fib_iterative(int n) { //O(n)
    int prev = 0;
    int curr = 1;
    for (int i = 0; i < n; i++) {
        int temp = curr;
        curr = prev + curr;
        prev = temp;
    }
    return prev;
}

int O2n(int n) { // O(2^n)
    int *arr;
    int i, j, count;
    arr = new int[n];
    arr[0] = 1;
    for (i = 1; i < n; i += 1)
        arr[i] = 2 * arr[i - 1];
    count = 0;
    for (i = 0; i < n; i += 1) {
        for (j = 1; j <= arr[i]; j += 1)
            count += 1;
    }
    return count;
}

void nestedLoop(int n) { // O(n^2) = n^2 * C=1/2

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                //constant work here
            }
        }
    }
}

void nestedLoop2(int n){ //O(n)
    for (int i = 0; i < n; i++) {
        if (i == 1){
            for (int j = 0; j < n; j++) {
                //constant work here
            }
        }
    }
}

void anotherLoop(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 1000; j++) {
            for (int l = 0; l < 1000000; l++) {
                for (int k = 0; k < n; k++) {
                    //constant
                }
            }
        }
    }

    for (int i = 0; i < 1000; i++) {
        //constant work here
    }
}

void square(int n){ //O(sqrt(n))
    for (int i = 0; i < sqrt(n); i++) {
        //constant work here
    }


}

void function2(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //constant
        }
    }

    for (int i = 0; i < n; i++) {
        //constant work
    }
}

void function3(int n){ // f(n) = logn * n + n/2
                        // f(n) = nlogn + n * 1/2
                        // O(nlogn) vs O(n)
                        // O(nlogn)

    for (int i = 1; i < n; i *= 2) {
        for (int j = 0; j < n; j++) {
            //constant
        }
    }

    for (int i = 0; i < n/2; i++) {
        //constant work
    }
}

void function4(int n){ //logn * logn = log^2n or (logn)^2
                        // log^2n vs n
                        // O(n)

    for (int i = 1; i < n; i *= 2) {
        for (int j = 0; j < n; j *= 2) {
            //constant
        }
    }

    for (int i = 0; i < n/2; i++) { //O(n)
        //constant work
    }
}

void function5(int n){
    for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                //constant
            }
        }
}


int main() {
    for (int i = 0; i < log(n); i *= 2) {

    }

    return 0;
}


