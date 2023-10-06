#include <iostream>
#include <map>
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
    if (TAIL == NULL) // first element
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

        // one node case
        if (curr == prev)
        {
            TAIL = NULL;
        }
        // two node case
        if (TAIL == curr)
        {
            TAIL = curr->next;
        }

        curr->next = NULL;
        delete curr;
    }
}

bool detectloop(Node *temp)
{

    if (temp == NULL)
    {
        return false;
    }

    map<Node *, bool> visited;

    while (temp != NULL)
    {
        if (visited[temp] == true)
            return true; // cycle present
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

// floyd's cycle
bool detect(Node *temp)
{

    if (temp == NULL)
    {
        return false;
    }
    Node *slow = temp;
    Node *fast = temp;

    while (slow != fast && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
    }

    if (slow == fast)
    {
        return true;
    }
    else
    {
        return false;
    }
}


Node * getstartnode(Node*temp){
    if (temp == NULL)
    {
        return temp;
    }
    Node *slow = temp;
    Node *fast = temp;

    while (slow != fast && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
    }

    if(slow==fast){
        slow=temp;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
}



Node * removeccle(Node*temp){
    if (temp == NULL)
    {
        return temp;
    }
   
Node * start=getstartnode(TAIL);
if(start==NULL){
    return TAIL; 
}
Node * t=start;

while(t->next!=start){
    t=t->next;
}
t->next=NULL;

}


//sort 0 1 2  // using count;   

Node* sortList(Node *head){
    // Write your code here.in

    int z=0;
    int one=0;
    int two = 0;

    Node*temp=head;

    while(temp!=NULL){
        if(temp->data==0) z++;
        else if (temp->data==1) one++;
        else two++;

        temp=temp->next;
    }
        
        temp=head;

    while(temp!=NULL){

        if(z){
            temp->data=0; 
            z--;
        }

        else if (one){
            temp->data = 1;
            one--;

        }

        else{
            temp->data=2;
            two--;
        }

        temp=temp->next;

    }
    return head;


}

int main()
{
    InsertatTAIL(2, 3);
    InsertatTAIL(3, 5);
    InsertatTAIL(4, 7);
    InsertatTAIL(5, 9);

    // printlist();
    // deleteNode(3);
    // deleteNode(9);
    // printlist();
    // cout << detect(TAIL)<<endl;
    // removeccle(TAIL);
    // cout << detect(TAIL)<<endl;
    // Node * t=getstartnode(TAIL);

    // cout<<t->data<<" "<<endl;


}