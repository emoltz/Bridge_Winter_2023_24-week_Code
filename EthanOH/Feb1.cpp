#include <iostream>

using namespace std;


void whileLoop() {
    int n = 0;
    int counter = 1;
    while (n < 5) {
        //do this stuff
        // as soon as n is NOT greater than 0, it will move on
        cout << counter << endl;
        n++;
        counter++;
    }
}

void forLoop1() {
    for (int n = 0, counter = 1; n < 5; n++, counter++) {
        cout << counter << endl;
    }
}

void forLoop2() {
    for (int i = 0; i < 5; i++) {
        cout << "OUTER LOOP: ";
        cout << i + 1 << endl;
        cout << "INNER LOOP: ";
        for (int j = 0; j < 5; j++) {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void triangle() {
    char star = '*';
    char space = '_';
    int spacesLimit = 3;
    int starLimit = 1;
    int lineLimit = 4;

    for (int i = 0; i < lineLimit; i++) {
        // spaces loop
        for (int j = 0; j < spacesLimit; j++) {
            cout << space;
        }

        // stars loop
        for (int j = 0; j < starLimit; j++) {
            cout << star;
        }

        cout << endl;

        // change the limits
        spacesLimit--;
        starLimit += 2;
    }
}


int main() {

    char star = '*';
    char space = '_';
    int spacesLimit = 3;
    int starLimit = 1;
    // 7 lines = input * 2 - 1
    int input = 4;
//    cout << "Enter a size:";
//    cin >> input;


//    int spaceLimit2 = 1;
//    int starLimit2 = 5;

    for (int lineCounter = 0; lineCounter < (input * 2 - 1); lineCounter++) {
        // print the outside spaces
        cout << lineCounter + 1 << ": ";

        for (int j = 0; j < spacesLimit; j++) {
            cout << space;
        }

        for (int j = 0; j < starLimit; j++) {
            cout << star;
        }
        cout << endl;

        if (lineCounter + 1 < input) {
            spacesLimit--;
            starLimit += 2;
        } else {
            spacesLimit++;
            starLimit -= 2;
        }

//        if (lineCounter + 1 <= 4) {
//            for (int j = 0; j < spacesLimit; j++) {
//                cout << space;
//            }
//
//            // print stars
//            for (int j = 0; j < starLimit; j++) {
//                cout << star;
//            }
//
//            spacesLimit--;
//            starLimit += 2;
//        } else {
//            //spaces
//            for (int j = 0; j < spaceLimit2; j++) {
//                cout << space;
//            }
//
//            //stars
//            for (int i = 0; i < starLimit2; i++) {
//                cout << star;
//            }
//            spaceLimit2++;
//            starLimit2 -= 2;
//        }
//
//
//        cout << endl;



//        if (spacesLimit >= 0) {
//            spacesLimit++;
//            starLimit -= 2;
//
//        } else {
//            spacesLimit--;
//            starLimit += 2;
//        }


    }


    return 0;
}