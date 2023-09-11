// #include <bits/stdc++.h>
// using namespace std;

// int c(int b,int p)
// {

//     if (p==1)
//         return b;
//     return b+c(b,p-1);
// }

// int main()
// {
//     int base,power;
//     cin>>base>>power;

//     cout<<c(base,power);
// }

// #include<iostream>
// using namespace std;

// int ind(int *arr, int i, int target) {
//     if (*(arr + i) == target)
//         return i;
//     return ind(arr, i + 1, target);
// }

// int main() {
//     int a[5] = {1, 2, 3, 4, 5};
//     int target = 5;

//     cout << ind(a, 0, target);

//     return 0;
// }

// // You are using GCC
// // // #include<iostream>
// #include<iomanip>
// using namespace std;

// bool rec(int arr[],int n, int i){
//     if(i>5){
//         return 1;
//     }
//     if(arr[i]>arr[i+1]){
//         return false;
//     }

//    return rec(arr,n,i+1);

// }

// int main(){

//     int arr[7]={1,2,3,4,5,8,7};
//     cout<<rec(arr,7,0);

// }

// #include<iostream>
// #include<iomanip>
// using namespace std;

// void removex(string& p,int i ){
//     if(p[i]=='\0') return;

//     if(p[i]=='x'){
//         p.erase(i,1);
//     }
//     removex(p,i+1);

// }

// int main(){

// string s="rxmxn";
// removex(s,0);
// cout<<s;

// }

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n = 4;
    int a[n] = {1, 2, 3, 4};
   int s=0;
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=a[k];
        }
        (sum>s?s=sum:s=s);

    }
   }

   cout<<s<<endl;
}