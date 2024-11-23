#include <iostream>

using namespace std;


void heapify(int* arr, int n, int i) {
    int largest = i; 
    int Left = 2 * i + 1;
    int Right = 2 * i + 2; 

    if (Left < n && arr[Left] > arr[largest])
        largest = Left;

    if (Right < n && arr[Right] > arr[largest])
        largest = Right;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int* arr, int size)
{
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    for (int i = size - 1; i >= 0; i--) {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}