#include<iostream>
using namespace std;

int power(int m,int n){
    if(n==1) return m;
    else return m*power(m,n-1);

}


int main(){
    int b=2;
    int p=3;
    cout<<power(b,p)<<endl;

}