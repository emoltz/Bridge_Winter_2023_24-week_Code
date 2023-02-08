#include <iostream>
using namespace std;

int main(){
    int input;

    char frame = '#';
    char planks = '$';
    char space = ' ';

    cout << "Enter positive integer: ";
    cin >> input;

    for (int i = 0; i < input; i++) { //rows
        for (int j = 0; j < input; j++) {
            // left or right or top or bottom
            if (j == 0 || j == input - 1 || i == 0 || i == input - 1){
                cout << frame;
            }
            // left diagonal going right || right diagonal going left
            else if(i == j || i + j == input - 1){
                cout << planks;
            }
            else{
                cout << space;
            }

        }
        cout << endl;
    }
    return 0;
}