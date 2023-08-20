#include<iostream>
using namespace std;

int fun(int n){
    
   if(n==1)
    return 1;
    else
        return n+fun(n-1);
}

int main(){
    int u=6;
    cout<<fun(u)<<endl;
}