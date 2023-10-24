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

