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

    // check to make sure the opening of the file did not fail
    if (!in_stream) {
        cout << "Error!";
        return 1;
    }


    char c;
    while (in_stream) {
        c = in_stream.get();
        if (c != ' ' && c != '_') {
            out_stream << c;
        }
    }

    out_stream << "This is some output!";
    return 0;
}

int getLineDemo() {
    ifstream in_stream; //read IN
    ofstream out_stream; // write OUT

    string filePath = "this is a filepath";
    string outFilePath = "new file path here";

    // best practices

    // check to make sure the opening of the file did not fail
    try {
        in_stream.open(filePath);
        out_stream.open(outFilePath);
    }
    catch (const exception &e) {
        cout << e.what() << endl;
        // AND/OR make code that re-prompts the user for the file path
        return 1;
    }

    if (!in_stream) {
        cout << "Error!";
        return 1;
    }
    string currLine;

    char c;
    while (getline(in_stream, currLine)) {

        for (int i = 0; i < currLine.length(); i++) {
            if (currLine[i] != ' ') {
                out_stream << currLine[i];
            }
        }
    }

    out_stream << "This is some output!";

    in_stream.close();
}

int main() {
    ifstream in_stream;
    ofstream out_stream;

    string inputFile = "input.txt";
    in_stream.open(inputFile);
    out_stream.open("output.txt");

    if (!in_stream) {
        cout << "Error";
        return 1;
    }

    char c;
    vector<int> allNumbers;
    string currLine;
    int currNum;
    while (getline(in_stream, currLine)) {
        for (int i = 2; i < currLine.length(); i++) {
            c = currLine[i];
            out_stream << c;
        }
        out_stream << "\n";
    }


    return 0;
}