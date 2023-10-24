#include <bits/stdc++.h>
using namespace std;
template<typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode(T data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    ~BinaryTreeNode() {
        delete left;
        delete right;
    }
};
BinaryTreeNode<int>* inputLevel() {
    int data;
    // cout << "Enter the data : ";
    cin >> data;
    if (data == -1) return NULL;
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    // while(pendingNodes.size() != 0) {
    while(!pendingNodes.empty()) {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        // cout << "Enter the left child data of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (leftChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            front->left = child;
            pendingNodes.push(child);
        }
        // cout << "Enter the right child data of " << front->data << endl;
        int rightChildData;
        cin >> rightChildData;

        if (rightChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}


void printLevel(BinaryTreeNode<int>* root) {
    if (root == NULL) return;
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(!pendingNodes.empty()) {
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        // cout << "Enter the left child data of " << front->data << endl;
        int leftChildData;
        cin >> leftChildData;
        if (front == NULL && !pendingNodes.empty()) {
            pendingNodes.push(NULL);
        } else {
            // leftChildData != -1) {
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
            cout << front->data << ":";
            cout << "L-";
            if (front->left != NULL) {
                pendingNodes.push(front->left);
                cout << front->left->data << ", ";
            } else {
                cout << -1 << ", ";
            }
            cout << "R-";
            if (front->right != NULL) {
                pendingNodes.push(front->right);
                cout << front->right->data << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }

}


bool search(BinaryTreeNode<int>* root, int x) {
    if (root == NULL) return false;
    if (root->data == x) {
        cout << root->data << endl;
        return true;
    }
    cout << root->data << " -> ";
    if (x > root->data) search(root->right, x);
    else search(root->left, x);
    return false;
}


// Leetcode - Insert a Node in a BST
TreeNode* insertIntoBST(TreeNode* root, int val) {
   if (root == NULL) return new TreeNode(val);
   if (val >= root->val) {
       root->right = insertIntoBST(root->right, val);
   }
   else if (val < root->val) {
       root->left = insertIntoBST(root->left, val);
   }
   return root;
}


TreeNode* deleteNode(TreeNode* root, int key) {
   if (root == NULL) return NULL;
   if (key < root->val) deleteNode(root->left, key);
   else if (key > root->val) deleteNode(root->right, key);
   else{
       //when it contains 0 child
       if (root->left == NULL && root->right == NULL) return NULL;
       //it contains 1 child
       if (!root->left || !root->right)
           return root->left ? root->left : root->right;
       // if(root->left!=NULL && root->right==NULL) return root->left;
       // if(root->left==NULL && root->right!=NULL) return root->right;
       // 2 children
       TreeNode* temp = root->left;
       while (temp->right != NULL) temp = temp->right;
       root->val = temp->val;
       root->left = deleteNode(root->left, temp->val);
   }
   return root;
}


int main()
{
    BinaryTreeNode<int>* root = inputLevel();
    printLevel(root);
    cout << endl;
    cout << endl;
    cout << "Search Result : " << endl;
    if (search(root, 20)) cout << "Value is present in BST..." << endl;
    else cout << "Value is not present in BST..." << endl;
    return 0;
}

