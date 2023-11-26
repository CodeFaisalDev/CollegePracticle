#include <iostream>

using namespace std;

// Definition of a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree() : root(nullptr) {}

    // Function to perform in-order traversal
    void inOrderTraversal(TreeNode* node) {
        if (node != nullptr) {
            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }

    // Function to perform pre-order traversal
    void preOrderTraversal(TreeNode* node) {
        if (node != nullptr) {
            cout << node->data << " ";
            preOrderTraversal(node->left);
            preOrderTraversal(node->right);
        }
    }

    // Function to perform post-order traversal
    void postOrderTraversal(TreeNode* node) {
        if (node != nullptr) {
            postOrderTraversal(node->left);
            postOrderTraversal(node->right);
            cout << node->data << " ";
        }
    }

    // Function to display the binary tree
    void display() {
        cout << "In-order traversal: ";
        inOrderTraversal(root);
        cout << endl;

        cout << "Pre-order traversal: ";
        preOrderTraversal(root);
        cout << endl;

        cout << "Post-order traversal: ";
        postOrderTraversal(root);
        cout << endl;
    }

    // Function to insert a node into the binary tree
    void insert(int value) {
        root = insertRecursive(root, value);
    }

private:
    // Recursive function to insert a node into the binary tree
    TreeNode* insertRecursive(TreeNode* node, int value) {
        if (node == nullptr) {
            return new TreeNode(value);
        }

        if (value < node->data) {
            node->left = insertRecursive(node->left, value);
        } else if (value > node->data) {
            node->right = insertRecursive(node->right, value);
        }

        return node;
    }
};

int main() {
    BinaryTree binaryTree;

    // Inserting nodes into the binary tree
    binaryTree.insert(50);
    binaryTree.insert(30);
    binaryTree.insert(20);
    binaryTree.insert(40);
    binaryTree.insert(70);
    binaryTree.insert(60);
    binaryTree.insert(80);

    // Displaying the binary tree with different traversals
    binaryTree.display();

    return 0;
}
