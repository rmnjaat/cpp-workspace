#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node * left;
    Node * right;

    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};


void printpre(Node* root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";

    printpre(root->left);
    
    printpre(root->right);


}

void printpost(Node* root){
    if(root==NULL){
        return ;
    }


    printpost(root->left);
    
    printpost(root->right);

    cout<<root->data<<" ";

}


void printin(Node* root){
    if(root==NULL){
        return ;
    }


    printin(root->left);
    
    cout<<root->data<<" ";
    printin(root->right);


}

int main()
{

    Node*root=new Node(1);
    Node*ntwo=new Node(2);
    Node*nthree=new Node(3);
   Node*nfr=new Node(4);
    Node*nfiv=new Node(5);  
     Node*nsix=new Node(6);
    Node*ntsevn=new Node(7);
    //    Node*neight=new Node(8);
    // Node*nnine=new Node(9);
    root->left=ntwo;
    root->right=nthree;
    ntwo->left=nfr;
    ntwo->right=nfiv;
    nthree->left=nsix;
    nthree->right=ntsevn;

    // cout<<root->data<<endl;
    // cout<<root->right->data<<endl;
    // cout<<root->left->data<<endl;

    // printpre(root);
    printin(root);

}