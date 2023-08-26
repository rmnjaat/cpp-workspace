#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * prev;
    Node * next; 


    public:
    Node(int a){
        data=a;
        prev=NULL;
        next=NULL;
    }
};

Node * HEAD=NULL;

void Insertathead(int x){

    Node * p = new Node(x);
    
    if(HEAD==NULL){
        HEAD= p;
        return ;
    }

    HEAD->prev=p;
    p->next=HEAD;
    HEAD=p;

}

int main(){

}