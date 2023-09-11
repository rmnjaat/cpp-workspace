#include<iostream>
using namespace std;

int main(){
    int n=5;
    int a[n]={-1,5,-2,-7,-4};

    int max=0;
    int maxatthispoint=0; // -ve not add

    for(int i=0;i<n;i++){
        maxatthispoint+=a[i];
        // if -ve then start from 0;
        (maxatthispoint>0)?max=maxatthispoint:maxatthispoint=0;

    }

    cout<<max<<endl;
}