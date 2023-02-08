#include <iostream>
using namespace std;

int main(){
    int n = 10;

    char frame = '#';
    char plank = '$';
    char space = '_';
    int spaceLimit1 = 0; //increase by 1
    int spaceLimit2 = n-4; //decrease by 2
    int spaceLimit3 = 0; // increase by 1

    for (int i = 0; i < n; i++) {
        if(i == 0 || i == n - 1){ //top row, bottom row
            for (int j = 0; j < n; j++) {
                cout << frame;
            }
        }
        else{ //middle section
            cout << frame; // beginning of row frame

            // first section of spaces

            // if ___
            for (int j = 0; j < spaceLimit1; j++) {
                cout << space;
            }

            //first plank will go
            cout << plank;

            // second section of spaces
            for (int j = 0; j < spaceLimit2; j++) {
                cout << space;
            }

            cout << plank;

            // third section of spaces
            for (int j = 0; j < spaceLimit3; j++) {
                cout << space;
            }

            cout << frame; // end of row frame
        }
        if (i > n/2){
            spaceLimit1--;
            spaceLimit2 += 2;
            spaceLimit3--;
        }
        else if(i != 0){
            spaceLimit1++;
            spaceLimit2 -= 2;
            spaceLimit3++;
        }


        cout << endl;


    }


    return 0;
}