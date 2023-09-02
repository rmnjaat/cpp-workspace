#include<iostream>
#include<vector>
using namespace std;

int main(){
    //default 0
    vector<int> v;
    v.push_back(1);
    //ca=1
    v.push_back(2);
    //cap=2
    v.push_back(3);
    //cap=6
    cout<<v.capacity();
    cout<<endl;
    cout<<v.size();
    cout<<endl;
    cout<<v.front();
    // gives front and back element
    cout<<endl;
    cout<<v.back();
    cout<<endl<<"before pop"<<endl;
    for(int i:v){
        cout<<i;
    }
    cout<<endl;
    v.pop_back();
    cout<<endl<<"after pop"<<endl;
    for(int i:v){
        cout<<i;
    }
    cout<<endl;
    auto v1=v.begin()+1;
    cout<<*v1;

}




// void miniMaxSum(vector<int> arr) {
//     long long min = LLONG_MAX, max = LLONG_MIN, sum;
//     for(int i = 0; i < arr.size(); i++) {
//         sum = 0;
//         for(int j = 0; j < arr.size(); j++) {
//             if(i != j) {
//                 sum += arr[j];
//             }
//         }
//         if(sum < min) {
//             min = sum;
//         }
//         if(sum > max) {
//             max = sum;
//         }
//     }
//     cout << min << " " << max << endl;
// }


// string angryProfessor(int k, vector<int> a) {
//     // count the number of on-time students
//     int on_time = 0;
//     for (int arrival : a) {
//         if (arrival <= 0) {
//             on_time++;
//         }
//     }

//     // compare with the threshold
//     if (on_time < k) {
//         return "YES"; // class is cancelled
//     } else {
//         return "NO"; // class is not cancelled
//     }
// }



// SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
//     // Check if either list is empty
//     if (headA == nullptr) {
//         return headB;
//     }
//     if (headB == nullptr) {
//         return headA;
//     }
    
//     // Create a new head pointer for the merged list
//     SinglyLinkedListNode* mergedHead = nullptr;
    
//     // Choose the smaller value as the initial head of the merged list
//     if (headA->data <= headB->data) {
//         mergedHead = headA;
//         headA = headA->next;
//     } else {
//         mergedHead = headB;
//         headB = headB->next;
//     }
    
//     // Keep track of the current node in the merged list
//     SinglyLinkedListNode* current = mergedHead;
    
//     // Merge the remaining nodes from both lists
//     while (headA != nullptr && headB != nullptr) {
//         if (headA->data <= headB->data) {
//             current->next = headA;
//             current = current->next;
//             headA = headA->next;
//         } else {
//             current->next = headB;
//             current = current->next;
//             headB = headB->next;
//         }
//     }
    
//     // Append any remaining nodes from either list
//     if (headA != nullptr) {
//         current->next = headA;
//     }
    
//     if (headB != nullptr) {
//         current->next = headB;
//    }

//    return mergedHead;  // Return the new, merged linked list
// }   