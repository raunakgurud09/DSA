#include <bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
    return;
}

void heapSort(int arr[], int n)
{

    int size = n;
    while (size > 1)
    {

        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1);
    }
}

int main()
{
    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    cout << "Heap creation" << endl;
    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    heapSort(arr, n);

    cout << "print arr" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}