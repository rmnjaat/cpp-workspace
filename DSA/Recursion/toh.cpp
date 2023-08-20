// #include<iostream>
// using namespace std;

// void toh(int n , int a, int b, int c){
//     if(n>0){
//         toh(n-1,a,c,b);
//         cout<<a<<"to"<<c<<endl;
//         toh(n-1,b,a,c);
//     }
// }

// int main(){
//     toh(3,1,2,3);
// }

#include<stdio.h>
void foo (int n, int sum)

       {

int k = 0, j = 0;

if (n == 0) return;

k = n % 10;

j = n/10;

sum = sum + k;

foo (j, sum);

printf("%d", k);

}

int main ()

{

int a = 2048, sum = 0;

foo (a, sum);

printf("%d \n", sum);

}