// #include <bits/stdc++.h>
// using namespace std;

// class Stack
// {
// public:
//     int *arr;
//     int top;
//     int size;

//     Stack(int siz)
//     {
//         size = siz;
//         arr = new int[size];
//         top = -1;
//     }

//     void push(int e)
//     {
//         if (size - top > 1)
//         {
//             top++;
//             arr[top] = e;
//         }
//         else
//         {
//             cout << "Stack is overflow " << endl;
//         }
//     }

//     void pop()
//     {
//         if (top < 0)
//         {
//             cout << "Stack Underflow" << endl;
//         }
//         else
//         {
//             top--;
//             cout << "pop sucessfull" << endl;
//         }
//     }

//     void peek()
//     {
//         if (top >= 0 && top < size)
//             cout << arr[top] << endl;
//         else
//             cout << "Stack is empty" << endl;
//     }

//     bool isempty()
//     {
//         if (top < 0)
//         {
//             return false;
//         }
//         else
//             return true;
//     }
// };

// int main()
// {
//     Stack s(3);

//     s.push(1);
//     s.push(2);
//     s.push(3);
//     // s.push(4);
//     s.peek();
// }


// //----------------using linked list---------------


#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;


    Node(int e){
        data=e;
        next=NULL;
    }
};

class Stack{
    public:
    Node * top;

    Stack(){
        top=NULL;
    }

    void push(int e){
        if(!top){
            Node * n=new Node(e);
            top=n;
        }
        else{
            Node * n=new Node(e);
            n->next=top;
            top=n;
        }

    }

    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
        }
        else{
            top=top->next;
        }
    }

    void peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<top->data<<endl;
        }
    }
};



int main(){

    Stack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.peek();

}