// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{a};i>=1;i--){
//         for(int j{i};j>=1;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             ((i+j)>5)?cout<<"*":cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             ((i<=j))?cout<<"*":cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             ((i<=j))?cout<<"*":cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             ((i+j)>5)?cout<<"* ":cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             ((i<=j))?cout<<"* ":cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//      for(int i{a-1};i>=1;i--){
//         for(int j{i};j>=1;j--){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             ((i+j)>a)?cout<<"* ":cout<<" ";
//         }
//         cout<<endl;
//     }
//      for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             ((i<j))?cout<<"* ":cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=4,p,q;
//     p=a;
//     q=a;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a*2;j++){
//             if(j==p || j==q){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         p--;
//         q++;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int s=a;
//     int v=1;
//     for(int i{1};i<=a;i++){
//         for(int j{s-1};j>=1;j--){
//             cout<<" ";
//         }
//         for(int j{1};j<=v;j++){
//             cout<<"*";
//         }
//         v+=2;
//         s--;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int s=a*2;
//     int v=1;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=v;j++){
//             cout<<" ";
//         }
//         for(int j{1};j<s;j++){
//             cout<<"*";
//         }
//         v++;
//         s-=2;
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     // int s=a*2;
//     // int v=1;
//     for (int i{1}; i <= a; i++)
//     {
//         for (int j{1}; j <= a; j++)
//         {
//             ((i + j) <= a) ? cout << " " : cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i{a - 1}; i >= 1; i--)
//     {

//         for (int j{1}; j <= a; j++)
//         {
//             ((i + j) <= a) ? cout << " " : cout << "*";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int p = 1, q = (a * 2) - 1;
//     for (int i{1}; i <= a; i++)
//     {
//         for (int j{1}; j < a * 2; j++)
//         {
//             if (j == p || j == q)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//         p++;
//         q--;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int p = a, q = a;
//     for (int i{1}; i <= a; i++)
//     {
//         for (int j{1}; j < a * 2; j++)
//         {
//             if (j == p || j == q)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//         p--;
//         q++;
//     }
//     p=2;
//     q=(a*2)-2;

//     for (int i{1}; i <= a-1; i++)
//     {
//         for (int j{1}; j < a * 2; j++)
//         {
//             if (j == p || j == q)
//             {
//                 cout << "*";
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//         p++;
//         q--;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int p=a;
//     int q=a;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<a*2;j++){
//             if(j>p && j<q){
//                 cout<<" ";
//             }
//             else {cout<<"*";}
//         }
//         p--;
//         q++;

//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int p=1;
//     int q=a*2-1;
//     for(int i{1};i<=a;i++){

//         for(int j{1};j<a*2;j++){

//             if(j>p && j<q){

//                 cout<<" ";

//             }

//             else {cout<<"*";}
//         }

//         p++;
//         q--;

//         cout<<endl;

//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//    int a=5;
//    for(int i=a;i>=1;i--){
//     for(int j=i;j>=1;j--){
//         cout<<"*";
//     }
//     cout<<endl;
//    }

// }

// }

// }

// }
//    for(int i=1;i<=a;i++){
//     for(int j=1;j<=i+1;j++){

// }

// }

// }
//         cout<<"*";
//     }
//     cout<<endl;
//    }

// }

// }

// #include<iostream>

// using namespace std;

// int main(){
//     int a=9;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             if(i==j || (i+j)==a+1){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             if(j==1 || (i==j)||(i==a)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=a;j++){
//             if(j==1 || (i==j)||(i==a)){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// 1
// 6 2
// 10 7 3
// 13 11 8 4
// 15 14 12 9 5

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int t=a;
//     int d=1;

//     for(int i{1};i<=a;i++){
//         int p=d;
//         int m=a-i+1;
//         int n=m;
//         for(int j{1};j<=i;j++){
//             cout<<p<<" ";
//             p=p-n;
//             n++;
//         }
//         d+=t;
//         t--;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int px=0;
//     for(int i{1};i<=5;i++){
//         px=1;
//         for(int j{1};j<=i;j++){
//             cout<<px<<" ";
//             px=px*(i-j)/j;
//         }
//         cout<<endl;

//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int p=1;
//     for(int i{1};i<=5;i++){
//         for(int j{1};j<=i;j++){
//             cout<<p<<" ";
//             p++;
//         }
//         p--;
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;

//     for(int i{1};i<=5;i++){
//         int p=i;
//         int t=0;
//         for(int j{1};j<=i;j++){
//          cout<<p+t<<" ";
//          p+=t;
//          t=(a-j);
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int x = 2;
//     for (int i{a}; i >= 1; i--)
//     {
//         for (int j = 1; j <= 5; j++)
//         {
//             if (i <= j)
//             {

//                 cout << setw(3) << x;
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 5;
    int x = 2;
    for (int i{a}; i >= 1; i--)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i <= j)
            {

                cout << setw(3) << x;
                x += 2;
            }

            else
            {
                cout << setw(3) << " ";
            }
        }
        cout<<endl;
    }
}

//                 x += 2;
//             }

//             else
//             {
//                 cout << setw(3) << " ";
//             }
//         }
//         cout<<endl;
//     }
// }
