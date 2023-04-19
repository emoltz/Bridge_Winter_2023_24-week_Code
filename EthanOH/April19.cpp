#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void basicReadIn() {
    ifstream file;
    string filePath = "this is a filepath";
    file.open(filePath);
    char c;
    vector<char> v;

    while (file.get(c)) {
        v.push_back(c);
    }

    file.close();
}


int aLittleMoreAdvancedReadIn() {
    ifstream in_stream; //read IN
    ofstream out_stream; // write OUT

    string filePath = "this is a filepath";
    string outFilePath = "new file path here";
    in_stream.open(filePath);
    out_stream.open(outFilePath);
    // best practices

    // check to make sure the opening of the file did not fail
    if (!in_stream) {
        cout << "Error!";
        return 1;
    }


    char c;
    while (in_stream) {
        c = in_stream.get();
        out_stream << c;
        // do whatever you want with this here!
    }

    out_stream << "This is some output!";
    return 0;
}

int main() {

    return 0;
}