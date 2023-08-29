#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    static int count;

public:
    Node(int a)
    {
        data = a;
        prev = NULL;
        next = NULL;
        count++;
    }
};
int Node::count = 0;
Node *HEAD = NULL;

void Insertathead(int x)
{
    Node *p = new Node(x);
    if (HEAD == NULL)
    {
        HEAD = p;
        return;
    }
    HEAD->prev = p;
    p->next = HEAD;
    HEAD = p;
}

void insertatlast(int x)
{

    Node *p = new Node(x);
    if (HEAD == NULL)
    {
        HEAD = p;
        return;
    }

    Node *temp = HEAD;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->prev = temp;
}

void insertNth(int x, int pos)
{
    if (pos < 1 && pos > Node::count + 1)
    {
        cout << "Invalid Position "
             << " ";
        return;
    }

    if (pos == 1)
    {
        Insertathead(x);
    }

    else if (pos == Node::count + 1)
    {
        insertatlast(x);
    }

    else
    {

        Node *temp = HEAD;

        for (int i = 0; i < pos - 2; i++)
        {
            temp = temp->next;
        }

        Node *p = new Node(x);

        p->next = temp->next;
        temp->next = p;
        p->prev = temp;
        (p->next)->prev = p;
    }
}

void DeleteNode(int pos)
{

    Node *temp = HEAD;

    if(pos==1){
        HEAD=temp->next;
         Node::count--;
         delete temp;
        return;
    }



    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    (temp->prev)->next = temp->next;
    if(temp->next!=NULL){
    (temp->next)->prev = temp->prev;
    }
    Node::count--;
}

void printlinklist()
{
    Node *temp = HEAD;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void recprint(Node * temp){
    if(temp==NULL) return;
    recprint(temp->next);
    cout<<temp->data<<" ";
}

int main()
{
    // Insertathead(5);
    insertNth(100, 1);
    insertNth(102, 2);
    insertNth(104, 3);
    insertNth(108, 2);
    printlinklist();
    // DeleteNode(1);
    // printlinklist();
    // DeleteNode(3);
    // printlinklist();

    recprint(HEAD);

}