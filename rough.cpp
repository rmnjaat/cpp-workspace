// #include<iostream>
// using namespace std;

// class Employee {
// private:
//     static int count;
//     int salary;

// public:
//     Employee() {
//         count++;
//     }

//     static int getCount() {
//         return count;
//     }

//     void setSalary(int s) {
//         salary = s;
//     }

//     int getSalary() {
//         return salary;
//     }
// };

// int Employee::count = 0; // Initialize static member variable

// int main() {
//     int n;
//     cin >> n; // Read the number of employees
//     Employee E[n];

//     for (int i = 0; i < n; i++) {
//         int d;
//         cin >> d;
//         E[i].setSalary(d);
//     }

//     cout << "Total number of Employees: " << Employee::getCount() << endl;
//     for (int i = 0; i < n; i++) {
//         cout << "Salary for employee " << i + 1 << ": " << E[i].getSalary() << endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=temp;


    }

}

 int main(){
    int a[]={1,8,6,7,23};

    insertion_sort(a,5);
    for(auto val:a){
        cout<<val<<" ";
    }
 }