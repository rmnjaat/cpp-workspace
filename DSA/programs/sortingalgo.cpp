
#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j=i-1;

            while(j>=0  && arr[j] > key ){
                arr[j+1]=arr[j];
                j--;
            }

            arr[j+1]=key;

    }
}


void selsort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
   {
        int min_index=i;

        for (int j = min_index+1; j < n; j++)
        {
            if(arr[j] < arr[min_index]){
                min_index=j;
            }
        }

        swap(arr[i],arr[min_index]);
        
    }
}


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
    int a[] = {1, 8, 6, 7, 23};

    // insertion_sort(a, 5);
    selsort(a,5);
    for (auto val : a)
    {
        cout << val << " ";
    }
}





