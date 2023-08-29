#include <bits/stdc++.h>
using namespace std;
  
int c(int b,int p)
{

    if (p==1)
        return b;
    return b+c(b,p-1);
}
  

int main()
{
    int base,power;
    cin>>base>>power;

    cout<<c(base,power);
}