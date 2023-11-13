#include <iostream>
#include <bits/stdc++.h>
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
bool rst(Node *temp, int x);
bool lst(Node *temp, int x);
Node *root = NULL;

Node *insert(Node *temp, int x)
{
    if (!temp)
    {
        Node *t = new Node(x);
        return t;
    }

    else if (temp->data <= x)
    {
        temp->right = insert(temp->right, x);
    }
    else
    {
        temp->left = insert(temp->left, x);
    }

    return temp;
}

void print(Node *temp)
{
    if (!temp)
    {

        return;
    }

    cout << temp->data << " ";

    print(temp->left);

    print(temp->right);
}

bool search(Node *temp, int x)
{
    if (!temp)
    {
        return false;
    }
    else if (temp->data == x)
    {
        return true;
    }

    else if (temp->data < x)
    {
        return search(temp->right, x);
    }

    else
    {
        return search(temp->left, x);
    }
}

int height(Node *temp)
{
    if (temp == NULL)
    {
        return -1;
    }

    return max(height(temp->left), height(temp->right)) + 1;
}

int depth(Node *temp, int d)
{
    if (temp == NULL)
    {
        return 0;
    }
    depth(temp->left, ++d);
    depth(temp->right, ++d);
    return d;
}

void levelprint(Node *temp)
{
    if (temp == NULL)
    {
        return;
    }

    queue<Node *> Q;

    Q.push(temp);

    while (!Q.empty())
    {
        Node *curr = Q.front();
        cout << curr->data << " ";
        if (curr->left)
            Q.push(curr->left);
        if (curr->right)
            Q.push(curr->right);
        Q.pop();
    }
}


bool lst(Node *temp, int x)
{
    if (temp == NULL)
    {
        return true;
    }

    if (temp->data <= x && lst(temp->left, x) && lst(temp->right, x))
    {
        return true;
    }
    else
    {
        false;
    }
};
bool rst(Node *temp, int x)
{
    if (temp == NULL)
    {
        return true;
    }

    if (temp->data > x && rst(temp->right, x) && rst(temp->left, x))
    {
        return true;
    }
    else
    {
        false;
    }
};

bool checkbst(Node *temp)
{
    if (temp == NULL)
    {
        return true;
    }
    int x = temp->data;
    if (rst(temp->right, x) && lst(temp->left, x) && checkbst(temp->left) && checkbst(temp->right))
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node * FindMin(Node * temp){
  while(temp->left!=NULL){
    temp=temp->left;
  }
  return temp;

}
Node * Delete(Node * temp,int x){
    if(temp==NULL) return temp;
    else if(temp->data > x) root->left=Delete(temp->left,x);
    else if(temp->data < x) root->right= Delete(temp->right,x);

    else{
        //no child 
        if(temp->left==NULL && temp->right == NULL){
            delete temp;
            temp=NULL;
            
        }

        //1 child
        else if(temp->left==NULL){
            Node * t=temp;

            temp=temp->right;

            delete t;

            
        }

        else if(temp->right==NULL){
            Node * t=temp;

            temp=temp->left;

            delete t;
            
            
        }

        else{
            Node * t=FindMin(root->right);
            temp->data = t->data;
            temp->right = Delete(temp->right,temp->data);
        }

    }

    return temp;

}


Node * sucesser(Node * root,int data){
    Node * curr = search(root,data);
    if(curr==NULL)  return NULL;
    if(curr->right!=NULL){
      FindMin(root->right);
    }


    else {
            Node * succeser =NULL;
            Node * ancester = root;
            while(ancester!=NULL){
                if(curr->data < ancester->data){
                    succeser= ancester;
                    ancester=ancester->left;
                }
                else{
                    ancester=ancester->right;
                }
            }

    return sucesser;
    }

}

int main()
{

    root = insert(root, 10);
    insert(root, 9);
    insert(root, 12);
    insert(root, 7);
    insert(root, 8);
    insert(root, 11);
    insert(root, 13);

    print(root);

    cout << endl;

    // cout<<search(root,12);
    Delete(root,9);

    cout << endl;
    print(root); 

    // cout<<height(root);
    // cout<<depth(root,0);

    // levelprint(root);
    // cout << checkbst(root);
    cout << endl;


}