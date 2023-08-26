#include <iostream>
using namespace std;
class Node
{
public:
    int a;
    Node *next = nullptr;

public:
    Node(int n){
        a = n;
        next =nullptr;
        }
    ~Node(){
    //    cout<<"Destructor called ." << this->a<<endl;
    // Node * current = this->next;
    //    delete next;
    //    next =NULL; 
    }
};

    void print(Node * head){
        int count=0;
        Node *temp =head;
        while(temp!=NULL){
            // cout<<temp->a<<"  "<<endl;
            temp=temp->next;
            count++;

        }

        Node*temp2 = head;
        for(int i=0;i<(count/2);i++){
            temp2=temp2->next;

        }

        cout<<temp2->a;
    }

int main(){

    Node d(20);
    Node e(30);
    Node f(40);
    Node g(50);
    Node h(60);
    d.next=&e;
    e.next=&f;
    f.next=&g;
    g.next=&h;

    print(&d);

    


}





