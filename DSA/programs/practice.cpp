#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    static int count;

    Node(int d) : data(d), next(NULL) { count++; }
};

Node *HEAD = NULL;
int Node::count = 0;

void insertatbeg(int d)
{
    Node *temp = new Node(d);
    if (HEAD == NULL)
    {
        HEAD = temp;
    }
    else
    {
        temp->next = HEAD;
        HEAD = temp;
    }
}

void insert(int d, int pos)
{
    if (pos < 1 && pos > Node::count + 1)
    {
        cout << "Invalid position " << endl;
        return;
    }


    Node *temp = new Node(d);

    if (HEAD == NULL)
    {
        HEAD = temp;
    }

    if (pos == 1)
    {
        temp->next = HEAD;
        HEAD = temp;
        return;
    }
    Node *itr = HEAD;

    for (int i{}; i < pos - 2; i++)
    {
        itr = itr->next;
    }

    temp->next = itr->next;
    itr->next = temp;
}

void insertatlast(int d)
{
    Node *temp = new Node(d);

    Node *itr = HEAD;
    while (itr->next != NULL)
    {
        itr = itr->next;
    }

    itr->next = temp;
}

void print()
{
    Node *temp = HEAD;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void deletenode(int pos){
    if(HEAD==NULL){
        cout<<"list is null";
        return;
    }

    if (pos < 1 || pos > Node::count + 1)
    {
        cout << "Invalid position " << endl;
        return;
    }

    Node* itr=HEAD;

    if(pos==1){
        HEAD=HEAD->next;
        Node::count--;
        return;
    }


    for(int i{};i<pos-2;i++){
        itr=itr->next;
    }

    Node*del=itr->next;



    itr->next=(itr->next)->next;
    if(!del){
    delete del;
    }

    Node::count--;

    
}


void reverse(){
    Node*curr=HEAD;
    Node* next=NULL;
    Node* prev=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    HEAD=prev;
}



int main()
{

    insertatbeg(5);
    insertatbeg(6);
    insertatbeg(6);
    insert(9, 4);
    insert(3, 3);
    insert(8, 1);
    insert(8, 1);
    cout<<"Size of list is "<<Node::count<<endl;

    print();
//    deletenode(6);
//     print();
//     // deletenode(7);

//    deletenode(6);
   deletenode(2);
    print();
   deletenode(1);
   deletenode(5);
    print();

    reverse();
    print();

    // deletenode()
}