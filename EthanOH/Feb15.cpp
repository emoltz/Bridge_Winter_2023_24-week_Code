#include <iostream>
#include <cmath>

using namespace std;


int doLoop(int n) { // O(n) omega(n) -> Theta(n)
    int result = 0;
    for (int i = 0; i < sqrt(n); i++) {
        result += i;
        cout << "current result: " << result << endl;
    }

    for (int i = 0; i < n * 2; i++) {
        result += i;
        cout << "current result: " << result << endl;
    }

    return result;

}


void loop2(int n){
    for (int i = 0; i < 100000000*n; i++) {
        //does some random constant stuff
    }
    // O(n)
}

void loop3(int n){
    for (int i = 0; i < n; i += 2) {
        // some constant stuff
    }
    // f(n) = n/2
    // O(n)
}

void loop4(int n){    // O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            //some stuff
        }
    }

}

void loop5(int n){ //O(n^2)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n/10; j++) {
            //some stuff
        }
    }
}

void loop6(int n){ // O(log_2(n))
    for (int i = 1; i < n; i *= 2) {
        cout << i << " ";
    }
}

void loop7(int n){ // O(n log_2(n))
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j *= 2) {
            // some stuff
        }
    }
}

int main() {
    loop6(10000);


    return 0;
}