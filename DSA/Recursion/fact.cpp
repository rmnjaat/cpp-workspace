// #include<iostream>
// using namespace std;

// int rec(int n){
//     if(n==1) return 1;
//     else return n*rec(n-1);

// }


// int main(){
//     int a=5;
//     cout<<rec(a)<<endl;

// }



#include<iostream>
using namespace std;

int main()
{
    int a[2][4] = {3, 6, 9, 12, 15, 18, 21, 24};
    cout << *(a[1] + 2) <<endl<< *(*(a + 1) + 2) <<endl<< a[1] << endl;
    return 0;
}