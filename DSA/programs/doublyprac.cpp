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