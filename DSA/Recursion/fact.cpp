#include<iostream>
using namespace std;

int rec(int n){
    if(n==1) return 1;
    else return n*rec(n-1);

}


int main(){
    int a=5;
    cout<<rec(a)<<endl;

}