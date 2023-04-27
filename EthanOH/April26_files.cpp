#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int basicReadIn() {
    ifstream file;
    string filePath = "this/is/filepath";
    file.open(filePath);

    // check to make sure it worked!
    if (!file) {
        cout << "Error";
        return 1;
    }

    char c;
    vector<char> v;

    while (file.get(c)) {
        v.push_back(c);
    }

    file.close();
    return 0;
}

void getLineFunction() {
    ifstream in_stream;
    ofstream out_stream;

    string inputPath = "input.txt";
    string outputPath = "output.txt";
    in_stream.open(inputPath);
    out_stream.open(outputPath);

    string currLine;
    while (getline(in_stream, currLine)) {
        for (int i = 2; i < currLine.length(); i++) {

        }
        out_stream << "\n";
    }
}


int main() {
    ifstream in_stream;
    ofstream out_stream;

    string inputPath = "input.txt";
    string outputPath = "output.txt";
    in_stream.open(inputPath);
    out_stream.open(outputPath);

    if (!in_stream) {
        cout << "Error";
        return 1;
    }

    char c;
    string currLine;
    while (getline(in_stream, currLine)){
        for (int i = 2; i < currLine.length(); i++) {
            if (currLine[i] != ' ' ){
                out_stream << currLine[i];
            }
        }
            out_stream << endl;
    }

    return 0;
}