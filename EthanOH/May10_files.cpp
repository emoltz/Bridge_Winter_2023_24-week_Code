#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BST{
public:
    BST();
    void insert(int x);
};


int main() {
    ifstream file;
    ofstream outFile;
    file.open("input.txt");
    BST bst;

    // ALWAYS check to make sure the file opened correctly
    if (!file) {
        cout << "Error!";
        return 1;
    }

    outFile.open("output.txt");

    char c;
    vector<char> v;
    vector<int> v_ints;

    while (file.get(c)) {
        // only grab numbers
        if (c != ' ') {
            int i = digittoint(c);
            bst.insert(i);
        }
    }

    for (int i = 0; i < v_ints.size(); i++) {
        outFile << v_ints[i] << "|";
    }


    file.close();

    return 0;

}