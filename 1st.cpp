// #include <iostream>

// using namespace std;
// int main(){

//     int a=4;
//     // cin>>a;
//     // int b=0;
//     // int c=0;

    // while (a>0){
    //     int r;
    //     r=a%10;
    //     b=b*10+(r*r);
    //     a=a/10;
    // }

//     // while (b>0){
//     //     int r;
//     //     r=b%10;
//     //     c=c*10+(r);
//     //     b=b/10;
//     // }

//     // cout<<c;
//     char s=' ';
//     int v=1;
//     for(int i{1};i<=5;i++){

//         // for(int j{1};j<=(a-i);j++){
//         //     cout<<" ";

//         // }
//         // for(int b{1};b<=i;b++){
//         //     cout<<b;
//         //     v=b;
//         // }

//         // for(int b=v-1;b>0;b--){
//         //     cout<<b;
//         // }
//     //    for(int b=1;b<=i;b++){
//     //     cout<<v;

//        }

//         cout<<endl;
//     }

// }

// #include <iostream>
// // #include <cmath>

// int main() {
//     int num, digit, result = 0, place = 1;

//     std::cout << "Enter a number: ";
//     std::cin >> num;

// while (num != 0) {
//     digit = num % 10;
//     result += (digit*digit) * place;

//     num /= 10;
//     if(digit>=4){
//         place *=100;
//     }
//     else{
//         place *=10;
//     }
// }

//     std::cout << "The result is: " << result << std::endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i{1};i<=a;i++){
//         for(int j{1};j<=i;j++){
//             ((i+j)%2==0)?cout<<"1":cout<<"0";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,r,s;
//     int first{0}, last{0};
//     cin>>a;

//     first=a%10;

//      while (a != 0) {
//         r = a % 10;
//         s=s*10+r;
//         a /= 10;
//     }
//     last=s%10;
//     cout<<first+last<<endl;

// }




// #include <iostream>

// using namespace std;

// int main() {
//     int n;

//     cout << "Enter a number: ";
//     ciconstexpr bool isPrime = true;

//         for (int j = 2; j < i; j++) {
//             if (i % j == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }

//         if (isPrime) {
//             cout << i << " ";
//         }
//     }

//     cout << endl;

//     return 0;
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     string a;
//     cin>>a;
//     int dec;

//     int l=a.length()-1;
//     for(char d:a){
//         d=d-'0';
//         dec=dec+(d*pow(2,l));
//         l--;

//     }

//     cout<<dec<<endl;

    

// }



// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     int p=1;
//     while (a>0){
//         int r;
//         r=a%10;
//         b=b+r*p;
//         p=p*2;
//         a=a/10;
//     }

//         cout<<b;

// }



// #include <iostream>
// // #include <iomanip>
// using namespace std;
// int main(){
//   double a{5};
//   double b{};
//   double res { a / b};
// cout<<res<<endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int decimal, binary = 0, base = 1;

//     std::cout << "Enter a decimal number: ";
//     std::cin >> decimal;

//     while (decimal > 0) {
//         int remainder = decimal % 2;
//         binary += remainder * base;
//         decimal /= 2;
//         base *= 10;
//     }

//     std::cout << "Binary equivalent: " << binary << std::endl;

//     return 0;

    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a[5]={1,5,9,6,3};
//     int max{0};
//     for(int i=0;i<5;i++){
//         (a[i]>max)?max=a[i]:max=max;
//     }
//     cout<<max; 
// }