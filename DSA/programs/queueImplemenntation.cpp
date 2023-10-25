#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int first;
    int data;
    int size;
    int last;

    Queue(int e)
    {
        arr = new int[e];
        first = 0;
        last = -1;
        size = e;
    }

    void push(int e)
    {
        if (size - last > 1)
        {
            last++;
            arr[last] = e;
        }
        else
        {
            cout << "stack overflow" << endl;
        }
    }

    void pop()
    {
        if (last >= 0)
        {

            int d = 1;
            while (d != size)
            {
                arr[d - 1] = arr[d];
                d++;
            }
            last--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    void peek()
    {
        if (last < 0)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << arr[first] << endl;
        }
    }
};

int main(){

    Queue q(3);

    q.push(1);
    q.push(2);
    q.pop();
    q.pop();
    q.pop();
    q.peek();
}