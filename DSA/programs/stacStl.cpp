#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// bool isValidParenthesis(string s)
// {
//     bool b=true;
//     stack<char> stack;
//     for (auto i : s) {
//       if (i == ']'|| i == '}'||i==')'){
//           if(stack.empty()){
//               return false;
//           }

//           else if(stack.top() !='(' && i==')') {
//             cout<<" poping  ";
//             cout<<stack.top()<<endl;
//               return false;
//           }

//           else if(stack.top() !='['&&i==']'){

//              cout<<" poping  ";
//              cout<<stack.top()<<endl;

//               return false;
//           }

//           else if (stack.top() !='{'&&i=='}'){
//              cout<<" poping  ";
//             cout<<stack.top()<<endl;
//               return false;
//           }
//           else{
//              cout<<" poping  else ";
//             cout<<stack.top()<<endl;
//               stack.pop();
//           }

//       }
//       else{

//       stack.push(i);
//       cout<<"pusshing" <<stack.top()<<endl;
//       }
//     }
//     if((!stack.empty())&&stack.top()=='(' ||stack.top()=='[' ||stack.top()=='{' ) return false;

//     return true;
// }

// int main(){
//     string s="[";
//     cout<<isValidParenthesis(s);

// }

// NEXT greATER ELEMENT  --------------------------------------------------------------------------------

// vector<int> nextGreater(vector<int> &arr, int n)
// {
  // Write your code here



