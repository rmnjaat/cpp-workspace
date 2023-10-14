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


bool search(Node * root,int val){
    if(root==NULL){
        return false;
    }
    if(root->data==val){
        return true;
    }

    else if( root->data < val){
        return  search(root->left,val);
    }

    else{
        return search(root->right,val);
    }

}

Node* insertIntoBST(Node* root, int val) {

        if(root==NULL ){
            return new Node(val);
        }


        if(val > root->data){
            root->right=insertIntoBST(root->right,val);

        }

        else if(val < root->data){
         root->left=insertIntoBST(root->left,val);
        }
        
        return root;
    }




int main()
{

    Node *root = new Node(1);
    Node *ntwo = new Node(2);
    Node *nthree = new Node(3);
    Node *nfr = new Node(4);
    Node *nfiv = new Node(5);
    Node *nsix = new Node(6);
    Node *ntsevn = new Node(7);
   

    root->left = ntwo;
    root->right = nthree;
    ntwo->left = nfr;
    ntwo->right = nfiv;
    nthree->left = nsix;
    nthree->right = ntsevn;

   cout<<search(root,9)<<endl;


  
}