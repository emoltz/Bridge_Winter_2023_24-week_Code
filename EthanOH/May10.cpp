#include <iostream>
#include <vector>
#include <list>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class BST {
    // logic for inserting, deleting, etc...
    TreeNode *head = nullptr;

    void treeInsert(TreeNode *root, int x) {
        // NEW TREE
        if (this->head == nullptr) {
            head = new TreeNode(x);
        }

        // CURR NODE IS NULL
        if (root == nullptr) {
            // insert data
            return;
        }

        // check if x is less than curr, if greater go to right
        if (x < root->val) {
            treeInsert(root->left, x);
        } else {
            treeInsert(root->right, x);
        }
    }
};

void inOrderTraversal(TreeNode *currentNode) { //O(n)
    //base case?
    if (currentNode != nullptr) {
        // go all the way left
        inOrderTraversal(currentNode->left);
        // print the value
        cout << currentNode->val << " ";
        // go right
        inOrderTraversal(currentNode->right);
    }
}


void treeStuff() {
    /*
 *      5
 *     / \
 *    3   8
 *   / \
 *  2   4
 */



    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);

    inOrderTraversal(root);
}


void iterators() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //iterator
//    vector<int>::iterator itr_begin = v.begin();
//    vector<int>::iterator itr_end = v.end();

//    for(vector<int>::iterator itr_begin = v.begin(); itr_begin != v.end(); ++itr_begin){
//        cout << *itr_begin << " ";
//    }

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    for (list<int>::iterator itr = l.begin(); itr != l.end(); ++itr) {
        cout << *itr << " ";
    }
    // OR:
    for (int &itr: l) {
        cout << itr << " ";
    }

}

int main() {
    int i = '1' - '0';
    cout << i;

    return 0;
}