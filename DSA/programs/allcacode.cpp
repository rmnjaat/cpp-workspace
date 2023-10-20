// // doubly linked list

// #include <iostream>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
//     static int count;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//         prev = NULL;
//         count++;
//     }
// };

// int Node::count = 0;
// Node *HEAD = NULL;

// void insertatbeg(int x)
// {
//     Node *temp = new Node(x);
//     if (HEAD == NULL)
//     {
//         HEAD = temp;
//         return;
//     }
//     HEAD->prev = temp;
//     temp->next = HEAD;
//     HEAD = temp;
// }

// void insertatany(int p, int x)
// {

//     Node *temp = new Node(x);

//     if (p == 1)
//     {
//         insertatbeg(x);
//     }
//     else
//     {
//         Node *cur = HEAD;
//         for (int i{}; i < p - 2; i++)
//         {
//             cur = cur->next;
//         }
//         temp->next = cur->next;
//         cur->next->prev = temp;
//         temp->prev = cur;
//         cur->next = temp;
//     }
// }

// void insertatlast(int x)
// {
//     Node *temp = new Node(x);

//     Node*cur=HEAD;

//     while(cur->next!=NULL)
//     {
//         cur=cur->next;
//     }

//     cur->next=temp;
//     temp->prev=cur;
// }

// void deelete(int p){
//     Node*cur=HEAD;

//     if(p==1){
//         cur->next->prev=NULL;
//         HEAD=cur->next;
//         delete cur;
//         Node::count--;
//         return;
//     }

//     for(int i{};i<p-1;i++){
//         cur=cur->next;
//     }

//     cur->prev->next=cur->next;
//     if(cur->next!=NULL){
//         cur->next->prev=cur->prev;
//     }
//     delete cur;

//     Node::count--;




// }



// void print(Node *p)
// {
//     if (p==NULL)
//     {
//         return;
//     }
//     cout << p->data << " ";
//     print(p->next);
// }

// int main()
// {
//     insertatbeg(4);

//     insertatlast(7);
//     insertatany(2,9);
//     insertatbeg(45);
//     print(HEAD);
//     cout<<endl;
//     deelete(4);
//     print(HEAD);
// }





//---------------------------------quick sort-----------------------------------------
//C++ program for Quick Sort Algorithm


// #include <iostream>
// #include <stdbool.h>
// #define MAX 7
// int intArray[MAX] = {4,6,3,2,1,9,7};
// void printline(int count) {
//    int i;	
//    for(i = 0;i < count-1;i++) {
//       std::cout << "=";
//    }
//    std::cout << "=\n";
// }

// void display() {
//    int i;
//    std::cout << "[";
//    // navigate through all items 
//    for(i = 0;i < MAX;i++) {
//       std::cout << intArray[i] << " ";
//    }
//    std::cout << "]\n";
// }

// void swap(int num1, int num2) {
//    int temp = intArray[num1];
//    intArray[num1] = intArray[num2];
//    intArray[num2] = temp;
// }

// int partition(int left, int right, int pivot) {
//    int leftPointer = left -1;
//    int rightPointer = right;
//    while(true) {
//       while(intArray[++leftPointer] < pivot) {
//          //do nothing
//       }	
//       while(rightPointer > 0 && intArray[--rightPointer] > pivot) {
//          //do nothing
//       }
//       if(leftPointer >= rightPointer) {
//          break;
//       } else {
//          std::cout << " item swapped :" << intArray[leftPointer] << "," << intArray[rightPointer] << "\n";
//          swap(leftPointer,rightPointer);
//       }
//    }
//    std::cout << " pivot swapped :" << intArray[leftPointer] << "," << intArray[right] << "\n";
//    swap(leftPointer,right);
//    std::cout << "Updated Array: "; 
//    display();
//    return leftPointer;
// }

// void quickSort(int left, int right) {
//      if(right-left <= 0) {
//       return;   
//    } else {
//       int pivot = intArray[right];
//       int partitionPoint = partition(left, right, pivot);
//       quickSort(left,partitionPoint-1);
//       quickSort(partitionPoint+1,right);
//    }        
// }


// int main() {
//    std::cout << "Input Array: ";
//    display();
//    printline(50);                            
//    quickSort(0, MAX-1);
//    std::cout << "Output Array: ";
//    display();
//    printline(50);
//    return 1;
// }




//-------------------- tower of hanoi---------------------------------


// #include<bits/stdc++.h>
// using namespace std;

// void towerofhanoi(int n,char src, char dest, char help){
//     if(n==0){
//         return ;
//     }

//     towerofhanoi(n-1,src,help,dest);
//     cout<<"disk "<<n<<" from "<<src <<" to "<< dest<<endl<<endl;
//     towerofhanoi(n-1,help,dest,src);

// }

// int main(){
//     int n=3;

//     towerofhanoi(3,'A','B','C');
// }




