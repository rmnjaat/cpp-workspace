#include <iostream>
#include <vector>
using namespace std;

bool checkarray(int arr[], int n)
{

    if (n == 0 || n == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = checkarray(arr + 1, n - 1);
        return ans;
    }
}

int asum(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    return arr[0] + asum(arr + 1, n - 1);
}

bool lsearch(int arr[], int n, int s)
{
    if (n == 0)
    {
        return false;
    }

    if (arr[0] == s)
    {
        return true;
    }

    else
    {
        bool b = lsearch(arr + 1, n - 1, s);
        return b;
    }
}

bool bsearch(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return false;
    }

    int mid = (s + e) / 2;

    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] < key)
    {
        bool b = bsearch(arr, mid + 1, e, key);
        return b;
    }
    else if (arr[mid] > key)
    {
        bool f = bsearch(arr, s, mid - 1, key);
        return f;
    }
}

int c = 0;
void merger(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *first = new int[l1];
    int *second = new int[l2];

    int k = s;

    for (int i = 0; i < l1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < l1; i++)
    {
        second[i] = arr[k++];
    }

    int i1 = 0;
    int i2 = 0;

    int indexx = s;

    while (i1 < l1 && i2 < l2)
    {
        if (first[i1] < second[i2])
        {
            arr[indexx++] = first[i1++];
        }

        else
        {
            arr[indexx++] = second[i2++];
            c++;
        }
    }

    while (i1 < l1)
    {
        arr[indexx++] = first[i1++];
    }

    while (i2 < l2)
    {
        arr[indexx++] = second[i2++];
        c++;
    }
}

void mergessort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;
    mergessort(arr, s, mid);

    mergessort(arr, mid + 1, e);

    merger(arr, s, e);
}






//quick sort

int partition(int arr[], int s, int e)
{

    int pivot=arr[s];

    int smlcount=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            smlcount++;
        }
    }

    int pivotindex=smlcount+s;

    swap(arr[pivotindex],arr[s]);



    //left right 

    int i=s,j=e;
    while (i<pivotindex && j>pivotindex)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }

        while (arr[j]>pivot)
        {
            j--;
        } 

        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }


        return pivotindex;
        
    }
 


}

void quicksort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int p;

    p = partition(arr, s, e);

    quicksort(arr, s, p - 1);
    quicksort(arr, p + 1, e);

}

int main()
{
    int n =8;

    // 10
    // 3 12 18 28 29 30 35 36 40
    // int arr[n] = {3, 12, 18, 28, 29, 30, 35, 36, 40};
    int arr[n] = {3,1,2,6,8,2,7,9};
 // int arr[n] = {2,1,2,3,8,2,7,9};
    // vector<int> arr ={3 ,12, 18, 28, 29, 30, 35, 36, 40};
    // cout<<checkarray(arr, n)<<endl;
    // cout<<"sum  is "<<2+4+6+9+9<<endl;
    // cout<<asum(arr,n)<<endl;

    // cout<<lsearch(arr,n,3)<<endl;

    int key = 3;
    // cout<<bsearch(arr,0,n-1,key)<<endl;
    // cout<<search(arr,key);

    // mergessort(arr,0,n-1);

    quicksort(arr, 0, n - 1);
    for (auto v : arr)
    {
        cout << v << "  ";
    }

    cout<<endl;
}