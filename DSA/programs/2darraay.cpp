#include <bits/stdc++.h>
using namespace std;
 

void insertToBottom(stack<int> S, int N)
{
   
    stack<int> temp;
 
 
    while (!S.empty()) {
 
      
        temp.push(S.top());
 
      
        S.pop();
    }
 
    
    S.push(N);

    while (!temp.empty()) {
 
     
        S.push(temp.top());
 
    
        temp.pop();
    }
 
    while (!S.empty()) {
        cout << S.top() << " ";
        S.pop();
    }
}

int main()
{
    stack<int> S;
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
 
    int N = 7;
 
    insertToBottom(S, N);
 
    return 0;
}