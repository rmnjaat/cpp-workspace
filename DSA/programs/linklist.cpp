#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next = nullptr;
    static int count;

public:
    Node(int n)
    {
        data = n;
        next = nullptr;
        count++;
    }
    ~Node() {}
    // friend void print();
    // friend void Insert_at_begning(int );
};

int Node::count = 0;

Node *HEAD = nullptr;

// void print_linklist()
// {
//     Node *temp = HEAD;
//     cout << "Linklist is ";
//     while (temp != NULL)
//     {
//         cout << temp->data << "  ";
//         temp = temp->next;
//     }
//     cout << endl;
// }



//printting through recursion

void recprint(Node * p){
    if(p==NULL) return;
    cout<<p->data<<" ";    // for reverse print, put it one line below 
    recprint(p->next);
}

void recreverse(Node * p){
    if(p->next == NULL) {
        HEAD=p;
        return;
    }
    // cout<<p->data<<" ";    // for reverse print, put it one line below 
    recprint(p->next);
    Node * q=p->next;
    q->next=p;
    p->next=NULL;
}

void Insert_at_begning(int a)
{

    // int a;
    // cout << "Enter value you want to insert at begning ";
    // cin >> a;

    Node *temp = new Node(a);
    // temp->data=a;
    temp->next = HEAD;
    HEAD = temp;
}

void NthInsertion(int a, int pos)
{

    if (pos < 1 || pos > Node::count+1)
    {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1)
    {
        Insert_at_begning(a);
        return;
    }

    Node *temp = new Node(a);
    Node *initial = HEAD;

    for (int i{}; i < pos - 2; i++)
    {
        initial = initial->next;   //n-1
    }

    temp->next = initial->next;  // setting nth->next = n+1next;
    initial->next = temp;   // n-1 = n
}


void Deletnth(int pos){
    Node *temp=HEAD;
    
    if(pos==1){
        HEAD=temp->next; 
        delete temp;
        Node::count--;
        return;
    }

    for(int i=0;i<pos-2;i++){
        temp=temp->next;     //n-1 node
    }
        Node::count--;
    Node *tempnth=temp->next;   //nth node
    temp->next=tempnth->next;   //n+1 node

    delete tempnth; 
}


void reverselinklist(){

    Node * current;  
    Node * prev; 
    Node * Nxt; 
    current=HEAD;
    prev=NULL;
    Nxt=NULL;

    while(current != NULL){
        Nxt=current->next;

        current->next=prev;

        prev=current;

        current=Nxt;

    }
    HEAD=prev;
}



    
Node* rev(Node* HeAD, int k,int c) {
    // Write your code here.
    if(HeAD==NULL){
       return NULL;
   }
   
   //reverse first k nodes
   Node*neext=NULL;
   Node*prev=NULL;
   Node*curr=HeAD;
   int count=0;
   
    if(c < k){
        return HeAD;
    }

   while( curr!=NULL  && count < k ){
       neext=curr->next;
       curr->next=prev;
       prev=curr;
       curr=neext;
       count++;
    }
   
   
   //recursion
   if(neext!=NULL){
       HeAD->next=rev(neext,k,c-k);
   }
   
   
   //step 3 return head of rev  list;
   return prev;
}


Node* kReverse(Node* HeAD, int k) {

  int c=0;
  Node*temp=HeAD;
  while(temp!=NULL){
      temp=temp->next;
      c++;
  }

  Node * r=rev(HeAD,k,c);
  return r;
}


int main()
{
    NthInsertion(99, 1);
    
    NthInsertion(90, 2);
    NthInsertion(88, 3);

    NthInsertion(89,4);

    NthInsertion(100, 5);
    // print_linklist();
    // recprint(HEAD);

    // Deletnth(1);
    // Deletnth(Node::count);
    // Deletnth(5);


    recprint(HEAD);
  Node*h2 =kReverse(HEAD,2);
  //1 2 3 4 5
  //2 1 4 3 5
   cout<<endl;
    recprint(h2);

}


