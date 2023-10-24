// doubly linked list
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    static int count;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
        count++;
    }
};

int Node::count = 0;

Node *HEAD = NULL;

void insertatbeg(int x)
{
    Node *temp = new Node(x);
    if (HEAD == NULL)
    {
        HEAD = temp;
        return;
    }
    HEAD->prev = temp;
    temp->next = HEAD;
    HEAD = temp;
}

void insertatany(int p, int x)
{
    Node *temp = new Node(x);
    if (p == 1)
    {
        insertatbeg(x);
    }
    else
    {
        Node *cur = HEAD;
        for (int i{}; i < p - 2; i++)
        {
            cur = cur->next;
        }
        temp->next = cur->next;
        cur->next->prev = temp;
        temp->prev = cur;
        cur->next = temp;
    }
}

void insertatlast(int x)
{
    Node *temp = new Node(x);
    Node*cur=HEAD;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=temp;
    temp->prev=cur;
}

void deelete(int p){
    Node*cur=HEAD;
    if(p==1){
        cur->next->prev=NULL;
        HEAD=cur->next;
        delete cur;
        Node::count--;
        return;
    }
    for(int i{};i<p-1;i++){
        cur=cur->next;
    }
    cur->prev->next=cur->next;
    if(cur->next!=NULL){
        cur->next->prev=cur->prev;
    }
    delete cur;
    Node::count--;
}

void print(Node *p)
{
    if (p==NULL)
    {
        return;
    }
    cout << p->data << " ";
    print(p->next);
}

int main()
{
    insertatbeg(4);
    insertatlast(7);
    insertatany(2,9);
    insertatbeg(45);
    print(HEAD);
    cout<<endl;
    deelete(4);
    print(HEAD);
}

//---------------------------------quick sort-----------------------------------------
C++ program for Quick Sort Algorithm
#include <iostream>
#include <stdbool.h>
#define MAX 7
int intArray[MAX] = {4,6,3,2,1,9,7};
void printline(int count) {
   int i;	
   for(i = 0;i < count-1;i++) {
      std::cout << "=";
   }
   std::cout << "=\n";
}
void display() {
   int i;
   std::cout << "[";
   // navigate through all items 
   for(i = 0;i < MAX;i++) {
      std::cout << intArray[i] << " ";
   }
   std::cout << "]\n";
}
void swap(int num1, int num2) {
   int temp = intArray[num1];
   intArray[num1] = intArray[num2];
   intArray[num2] = temp;
}
int partition(int left, int right, int pivot) {
   int leftPointer = left -1;
   int rightPointer = right;
   while(true) {
      while(intArray[++leftPointer] < pivot) {
         //do nothing
      }	
      while(rightPointer > 0 && intArray[--rightPointer] > pivot) {
         //do nothing
      }
      if(leftPointer >= rightPointer) {
         break;
      } else {
         std::cout << " item swapped :" << intArray[leftPointer] << "," << intArray[rightPointer] << "\n";
         swap(leftPointer,rightPointer);
      }
   }
   std::cout << " pivot swapped :" << intArray[leftPointer] << "," << intArray[right] << "\n";
   swap(leftPointer,right);
   std::cout << "Updated Array: "; 
   display();
   return leftPointer;
}
void quickSort(int left, int right) {
     if(right-left <= 0) {
      return;   
   } else {
      int pivot = intArray[right];
      int partitionPoint = partition(left, right, pivot);
      quickSort(left,partitionPoint-1);
      quickSort(partitionPoint+1,right);
   }        
}
int main() {
   std::cout << "Input Array: ";
   display();
   printline(50);                            
   quickSort(0, MAX-1);
   std::cout << "Output Array: ";
   display();
   printline(50);
   return 1;
}




//-------------------- tower of hanoi---------------------------------
#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n,char src, char dest, char help){
    if(n==0){
        return ;
    }
    towerofhanoi(n-1,src,help,dest);
    cout<<"disk "<<n<<" from "<<src <<" to "<< dest<<endl<<endl;
    towerofhanoi(n-1,help,dest,src);
}
int main(){
    int n=3;
    towerofhanoi(3,'A','B','C');
}


//------------------------------binary tree---------------------
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void printpre(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printpre(root->left);
    printpre(root->right);
}

void printpost(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printpost(root->left);
    printpost(root->right);
    cout << root->data << " ";
}

void printin(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printin(root->left);
    cout << root->data << " ";
    printin(root->right);
}
Node *takeinp()
{
    int rd;
    cin >> rd;
    if (rd == -1)
    {
        return NULL;
    }
    Node *r = new Node(rd);
    Node *l = takeinp();
    Node *rig = takeinp();
    r->left = l;
    r->right = rig;
    return r;
}
void Mirrorbt(Node * root){
    if(root==NULL){
        return;
    }
    Node*temp=root->left;
    root->left=root->right;
    root->right=temp;
    Mirrorbt(root->left);
    Mirrorbt(root->right);

}
//height
int bth(Node * root){
    if(root==NULL){
        return 0;
    }
    int lh=bth(root->left);
    int rth=bth(root->right);
    return 1+max(lh,rth);
}
int sumofnode(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (root->data)+sumofnode(root->left)+sumofnode(root->right);
}
void replacedepth(Node * root,int n){
    if(!root){
        return ;
    }
    root->data=n;
    replacedepth(root->left,n+1);
    replacedepth(root->right,n+1);
    return ;
}
int replace_with_height(Node* root){
    if(!root){
        return 0;
    }
    int lh=replace_with_height(root->left);
    int rh=replace_with_height(root->right);
    int h = 1+max(lh,rh);
    root->data=h;
    return h;

}
void replace_with_level(Node * root,int n){
    if(!root){
        return ;
    }
    root->data=n;
    replace_with_level(root->left,n+1);
    replace_with_level(root->right,n+1);
    return ;
}
void nodeWithoutSibling(Node *root){
    if(!root){
        return;
    }
    else if((!root->left) && (root->right)){
        cout<<root->right->data<<" ";
    }
    else if((root->left) && (!root->right)){
        cout<<root->left->data<<" ";
    }
    nodeWithoutSibling(root->left);
    nodeWithoutSibling(root->right);
}


//--------------------------------------binary search treee-------------------
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

