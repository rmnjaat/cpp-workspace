#include<iostream>

using namespace std;

int rec(int n){
    if(n==1) return 1;
    else return n*rec(n-1);

}


// double ncr(int n, int r){

// return rec(n)/(rec(r)*(rec(n-r)));

// }


int ncr(int n,int r){
    if(r==0 || n==r){
        return 1;
    }
    else{
        return ( ncr(n-1,r-1)+ncr(n-1,r));
    }
}


int main(){

    cout<<ncr(5,2)<<endl;

    return 0;
}