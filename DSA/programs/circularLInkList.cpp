#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int n)
    {
        data = n;
        next = NULL;
    }
};

Node *TAIL = NULL;

// x= new value
// d = alredy present value after which new element is added

void InsertatTAIL(int d, int x)
{
    // assuminng data is present in list
    Node *temp = new Node(x);
    if (TAIL == NULL)
    {
        TAIL = temp;
        temp->next = temp;
    }
    else
    {
        Node *curr = TAIL;
        while (curr->data != d)
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
    }
}
void printlist()
{

    if (TAIL == NULL)
    {
        cout << "List is empty";
        return;
    }

    Node *temp = TAIL;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (TAIL != temp);
    cout << endl;
}

// x= data to delete

void deleteNode(int x)
{

    if (TAIL == NULL)
    {
        cout << "List is empty";
    }


    else
    {
        Node *prev = TAIL;
        Node *curr = prev->next;

        while (curr->data != x)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

    //one node case
        if(curr==prev){
            TAIL=NULL;
        }


        if(TAIL==curr){
            TAIL=curr->next;
        }
             
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    InsertatTAIL(2, 3);
    // InsertatTAIL(3, 5);
    // InsertatTAIL(5, 7);
    // InsertatTAIL(3, 9);

    printlist();
    deleteNode(3);
    // deleteNode(9);
    printlist();
}