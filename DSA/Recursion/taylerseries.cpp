#include<iostream>
using namespace std;




//---------------------------------------O(n^2)
// double e(int x,int n){
//     static int p=1,f=1;
//     double r=0;

//     if(n==0)
//      return 1;
//     else {
        
//         r=e(x,n-1);
//         p=p*x;
//         f=f*n;
//         return r+(p/f);
         
//     }
// }



// =------------------------O(n)----------------

double e(int x,int n){
    static int s=1;
    if(n==0){
        return s;
    }
    else{
        s=1+(x/n)*s;
        return e(x,n-1);
    }
}

int main(){
    int b=2;
    int p=3 ;
    cout<<e(b,p)<<endl;

}