#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


class TreeNode {
public:
    int key;
    string name;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : key(x), left(nullptr), right(nullptr) {}
};


int main() {
    ifstream file;
    ofstream outFile;
    file.open("input.txt");

    // ALWAYS check to make sure the file opened correctly
    if (!file) {
        cout << "Error!";
        return 1;
    }

    outFile.open("output.txt");

    char c;
    string s;
    string currNumber;
    vector<char> v;
    vector<int> v_ints;

    while (getline(file, s)) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                outFile << s[i];
            }
        }
        outFile << endl;
    }

    file.close();

    return 0;

}