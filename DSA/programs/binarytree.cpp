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


//node insert duplicate

// void insertdupli(){}

// greater than x



int main()
{

    Node *root = new Node(1);
    Node *ntwo = new Node(2);
    Node *nthree = new Node(3);
    Node *nfr = new Node(4);
    Node *nfiv = new Node(5);
    Node *nsix = new Node(6);
    Node *ntsevn = new Node(7);
    //    Node*neight=new Node(8);
    // Node*nnine=new Node(9);

    root->left = ntwo;
    root->right = nthree;
    ntwo->left = nfr;
    ntwo->right = nfiv;
    nthree->left = nsix;
    nthree->right = ntsevn;

    //   root->left = ntwo;
    // root->right = nthree;
    // ntwo->left = NULL;
    // ntwo->right = nfiv;
    // nthree->left = nsix;
    // nthree->right = NULL;


    cout<<bth(root);

    // cout<<sumofnode(root);
    // printpre(root);
    // cout<<endl;



    // nodeWithoutSibling(root);
    // replace_with_level(root,1);
    // printpre(root);

    // preorder(root);
    cout<<endl;



    // cout<<root->data<<endl;
    // cout<<root->right->data<<endl;
    // cout<<root->left->data<<endl;

    // printpre(root);

    // Node *  rr=takeinp();
    // printpre(rr);
    // cout<<endl;

    // Mirrorbt(rr);
    // cout<<"Mirrered tree "<<endl;
    // printpre(rr);

    // cout<<"rrleft  "<<rr->left->data<<endl;
    // cout<<"rr right  "<<rr->right->data<<endl;
}