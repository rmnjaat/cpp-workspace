#include<iostream>
using namespace std;

class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }

};

Node * head=NULL;

Node *getListAfterReverseOperation(Node *head, int n, int b[]){
	// Write your code here.
	Node *  temp =head;
	Node * temp2 = head;
	int l=0;
	
	while(temp!=NULL){
		l++;
		temp=temp->next;
	}

    

    l--;
	Node * curr=temp2;
	Node * prev=NULL;
	Node * nxt=NULL;

	for(int i=0;i<n;i++){
		if(l<b[i]){
			break;
		}
        if(curr->data==-1){
			break;

		}
		for(int j=0;j<b[i];j++){
			nxt = curr->next;
			curr->next = prev;
			prev = curr;
			curr=nxt;
			l--;
		}
    head=prev;
	}
		


	return head;
}


void print_linklist()
{
    Node *temp = head;
    cout << "Linklist is ";
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}


int main(){
    Node *e=new Node(1);
    Node *f=new Node(2);
    Node *g=new Node(3);
    Node *h=new Node(4);
    Node *o=new Node(5);
    Node *t=new Node(-1);

    head=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=o;
    o->next=t;
    t->next=NULL;

    print_linklist();
    int n=5;
    int arr[5]={3,3,5};
    Node * tmp=NULL;



    getListAfterReverseOperation(head,n,arr);
    Node *temp = tmp;
    cout << "Linklist is ";
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}