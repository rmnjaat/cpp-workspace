
// #include <iostream>
// using namespace std;

// void insertion_sort(int arr[], int n)
// {
//     for (int i = 1; i < n; i++)
//     {
//         int temp = arr[i];
//         int j = i - 1;

//         while (j >= 0 && arr[j] > temp)
//         {
//             arr[j + 1] = arr[j];
//             j--;
//         }

//         arr[j + 1] = temp;
//     }
// }

// int main()
// {
//     int a[] = {1, 8, 6, 7, 23};

//     insertion_sort(a, 5);
//     for (auto val : a)
//     {
//         cout << val << " ";
//     }
// }

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void selsort(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         int min = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[i])
//             {
//                 min = j;
//             }
//         }
//         if (min != i)
//         {
//             swap(arr[min], arr[i]);
//         }
//     }
// }

// int main()
// {
//     int arr[] = {1, 8, 4, 6, 3};

//     selsort(arr, 5);

//     for (auto v : arr)
//     {
//         cout << v << " ";
//     }
// }

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n)
{

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {1, 9, 3, 6, 2};

    bubblesort(arr, 5);

    for (auto v : arr)
    {
        cout << v << " ";
    }
}