#include "HeapSort.h"

void HeapSort::SortArr(const ArrayOfNumber& arr, int size) const {
    for (int i = size / 2 - 1; i >= 0; i--)
    {
        heapify(arr, size, i);
    }
    
    for (int i = size - 1; i >= 0; i--)
    {
        std::swap(arr[0], arr[i]);

        heapify(arr, i, 0);
    }
}

void HeapSort::heapify(const ArrayOfNumber& arr, int size, int i) const
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < size && arr[l] > arr[largest])
    {
        largest = l;
    }

    if (r < size && arr[r] > arr[largest])
    {
        largest = r;
    }

    if (largest != i)
    {
        std::swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}