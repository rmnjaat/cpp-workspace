#include <iostream>
using namespace std;

int main()
{

   // int x = 1534236469;
   // long long int y = abs(x);
   // long long int res = 0;
   // while (y > 0)
   // {
   //    int r = abs(y % 10);
   //    res = res * 10 + r;
   //    y /= 10;
   // }
   // if (x < 0 && y > -2147483648 && y < 2147483647)
   // {
   //    return -1 * res;
   // }
   // else if (y > -2147483648 && y < 2147483647)
   // {

   //    cout<< res;
   // }
   // else
   // {
   //    cout<< 0;
   // }

   // int k=2;
   // k= ~k;
   // cout<< k;

   long long int n = 5;

   long long int b = 0;
   long long int m = 1;
   while (n > 0)
   {
      int r = n % 2;
      b = r * m + b;
      m *= 10;
      n = n / 2;
   }

   cout << b;

   // long long int n = 5;
   // long long int b = 0;
   // long long int m = 1;

   // while (n > 0)
   // {
   //    int r = n % 2; // Use int data type for the remainder
   //    b = r * m + b;
   //    m *= 10;
   //    n /= 2;
   // }

   // cout << b;

   return 0;
}