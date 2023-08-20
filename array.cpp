// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,4,3,6};
//     int to_find;
//     cin>>to_find;
//     for(int i=0;i<5;i++){
//         if(arr[i]==to_find){
//             cout<<"Element found at :"<<i;
//             break;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// void selectionsort(int arr[], int n)
// {
//     cout << endl;
//     for (int i = 0; i < n - 1; i++)
//     {
//         int min = arr[i], minindex = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < min)
//             {
//                 min = arr[j];
//                 minindex = j;
//             }
//         }
//         // swap
//         int temp = arr[i];
//         arr[i] = arr[minindex];
//         arr[minindex] = temp;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     // taking input an array
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selectionsort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//-----------------------ARRAY ROTATION----------------

// #include<iostream>
// using namespace std;
// int main()
// {   int k=2;
//     int n=5;
//     int arr[n]={1,2,3,4,5};
// for(int j{};j<k;j++){
//     int  lastindexval=arr[n-1];
//     for(int i=n-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=lastindexval;
// }
//      for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {   int k=2;
//     int n=5;
//     int arr[n]={1,2,3,4,5};
// for(int j{};j<k;j++){
//     int  lastindexval=arr[n-1];
//     for(int i=n-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=lastindexval;
// }
//      for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

// }

// #include<iostream>
//  using namespace std;
// int main(){
//     char a[100];
//     cin>>a;

//     int i{};
//     int l{};
//     while(a[i]!='\0'){
//         l++;
//         i++;
//     }
//     cout<<l;
// }

// #include<iostream>
// #include<string>

// using namespace std;
// int main(){

//     int a;
//     cin>>a;
//     string array[a];
//     for(int i=0;i<a;i++){
//         cin>>array[i];
//     }

//     int u=0;

//     for( int i{};i<a;i++){
//         for(int j=i+1;j<a;j++){
//             if(array[i]!=array[j]){
//                 u++;
//             }
//         }

//     }

//     cout<<u;

//     int p=0;
//     string array2[a-u];
//     for(auto val: array){
//         for(auto va: array2){
//             if(val==va){
//                 break;
//             }
//             else{
//                 array2[p]=val;
//                 p++;
//             }
//         }

//     }

//     for(auto val : array2 ){
//         cout<<val;
//     }

// }

// #include<iostream>
// #include<string>

// using namespace std;

// int main() {
//     int a;
//     cin >> a;

//     string array[a];
//     for(int i = 0; i < a; i++) {
//         cin >> array[i];
//     }

//     int u = 0;

//     // Counting number of unique elements
//     for(int i = 0; i < a; i++) {
//         bool isUnique = true;

//         // Check if current element exists in previous elements
//         for(int j = 0; j < i; j++) {
//             if(array[i] == array[j]) {
//                 isUnique = false;
//                 break;
//             }
//         }

//         if(isUnique) {
//          u++;
//         }
//     }
// int p = 0;
// string array2[u];
// // Inserting unique elements into array2
// for(int i = 0; i < a; i++) {
//     bool isUnique = true;
//     // Check if current element exists in array2
//     for(int j = 0; j < p; j++) {
//         if(array[i] == array2[j]) {
//             isUnique = false;
//             break;
//         }
//     }
//     if(isUnique) {
//         array2[p] = array[i];
//         p++;
//     }
// }
// // Printing the unique elements in array2
// for(int i = 0; i < u; i++) {
//     cout << array2[i] << " ";
// }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
//     int a;
//     cin>>a;
//     string arr[a];
//     for (size_t i = 0; i < a; i++)
//     {
//         cin>>arr[i];
//     }
//     int count=0;
//     char c='a';

//     for(auto val : arr){
//         if(val[0]==c){
//             count++;

//         }

//     }

//     cout<<"count"<<count<<" ";
// }

// You are using GCC
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     char arr[a+2];
//     for(int i{};i<a;i++){
//         cin>>arr[i];
//     }

//     int pos;
//     cin>>pos;

//     char ch;
//     cin>>ch;

//   for(auto val :arr){
//         cout<<val<<" ";
//     }

//     for(int i=a-1;i>=pos;i--){
//         arr[i+1]=arr[i];

//     }

//     arr[pos]=ch;

//     cout<<"Updated array after insertion: ";

//      for(auto val :arr){
//         cout<<val<<" ";
//     }

// }

// You are using GCC
// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int arr[a];
//     for(int i{};i<a;i++){
//         cin>>arr[i];

//     }

//     int tim;
//     cin>>tim;

//     cout<<"Original array: ";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }

//     cout<<endl;

//     for(int i=0;i<tim;i++){
//         int last=arr[a-1];

//         for(int i=a-2;i>=0;i++){
//             arr[i+1]=arr[i];
//         }

//         arr[0]=last;
//     }

//     cout<<"Updated array: ";
//     for(int i=0;i<a;i++){
//         cout<<arr[i]<<" ";
//     }

// }

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int arr[a];
    for (int i{0}; i < a; i++)
    {

        cin >> arr[i];
    }

    bool rev = true;
    for (int i = a - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            int temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
            rev = false;
            break;
        }
    }

    if (rev)
    {
        for (int i = 0; i < a / 2; i++)
        {

            int temp = arr[a - 1 - i];
            arr[a - 1 - i] = arr[i];
            arr[i] = temp;
        }
    }

for (auto val : arr)
{
    cout << val << " ";
}
return 0;
}

// You are using GCC