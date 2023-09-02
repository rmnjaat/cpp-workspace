// #include<iostream>
// using namespace std;

// int bin(int n){
//     if(n==0) return 0;

//    return n%2+10*(bin(n/2));
// }

// int main(){
// int a;
// cin>>a;

// cout<<bin(a);

// int * p=NULL;
// if(p){
//     cout<<"Null";
// }
// }   


#include <iostream>
int main() {
    int *ptr;
    ptr = new int;
    delete ptr;
    // ptr=NULL;
    // *ptr = 5;
    std::cout << ptr;
    return 0;
}