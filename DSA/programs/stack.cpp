#include<iostream>
#include<stack>
#include<climits>
using namespace std;
template <typename T>
class Stackusingarray{
T *data;
int nextindex;
int capacity;
public:
Stackusingarray(){
data=new T[4];
nextindex=0;
capacity=4;
}
//return no. of element present in our stack
int size(){
return nextindex;
}
bool isEmpty(){
// if(nextindex==0) return true;
// else return false;
return nextindex==0;
}
void push(T element){
if(nextindex==capacity){
T *newdata=new T[2*capacity];
for(int i=0;i<capacity;i++){
newdata[i]=data[i];
}
capacity*=2;
delete [] data;
data=newdata;
}

data[nextindex]=element;
nextindex++;
}
T pop(){
if(isEmpty()){
cout<<"Stack is empty"<<endl;
return 0;
}
nextindex--;
return data[nextindex];
}
T top(){
if(isEmpty()){
cout<<"Stack is empty"<<endl;
return 0;
}
return data[nextindex-1];
}
};
int main(){
Stackusingarray<char> s;
s.push(100);
s.push(101);
s.push(102);
s.push(103);
s.push(104);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;

cout<<s.size()<<endl;

cout<<s.isEmpty()<<endl;
return 0;
}