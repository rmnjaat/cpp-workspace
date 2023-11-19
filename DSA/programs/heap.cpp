#include<iostream>
using namespace std;

void heapify(int a[], int n, int i) {
    int largest = i;
    int l = 2 * i;
    int r = 2 * i + 1;

    if (l <= n && a[l] > a[largest]) {
        largest = l;
    }
    if (r <= n && a[r] > a[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void buildMaxHeap(int a[], int n) {
    for (int i = n / 2; i > 0; i--) {
        heapify(a, n, i);
    }
}

void heapsort(int a[],int n){
    for(int i=n;i>0;i--){
        swap(a[i],a[1]);
        heapify(a,i-1,1);
    }
}

int main() {
    int arr[7] = {0, 10, 30, 50, 20, 35, 16}; // Note: Added a 0 at the beginning to use 1-based indexing

    // buildMaxHeap(arr, 6);
    heapsort(arr,7);

    cout << "Max Heap: ";
    for (int i = 1; i <= 6; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
