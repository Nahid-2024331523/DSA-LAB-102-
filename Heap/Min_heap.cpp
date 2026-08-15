#include<bits/stdc++.h>
using namespace std;
struct MinHeap
{
    int *arr;
    int size;
    int totalSize;
};
void initHeap(MinHeap *h, int n)
{
    h->arr = new int[n];
    h->size = 0;
    h->totalSize = n;
}
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
void insert(MinHeap *h, int value)
{
    if (h->size == h->totalSize)
    {
        cout << "Heap Overflow" << endl;
        return;
    }
    h->arr[h->size] = value;
    int index = h->size;
    h->size++;
    while (index > 0 && h->arr[(index - 1) / 2] > h->arr[index])
    {
        swap(&h->arr[(index - 1) / 2], &h->arr[index]);
        index = (index - 1) / 2;
    }
    cout << value << " inserted into the heap" << endl;
}
void printHeap(MinHeap *h)
{
    for (int i = 0; i < h->size; i++)
    {
        cout << h->arr[i] << " ";
    }
    cout << endl;
}
void heapify(MinHeap *h, int index)
{
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;
    if (left < h->size && h->arr[left] < h->arr[smallest])
        smallest = left;
    if (right < h->size && h->arr[right] < h->arr[smallest])
        smallest = right;

    if (smallest != index)
    {
        swap(&h->arr[index], &h->arr[smallest]);
        heapify(h, smallest);
    }
}
void deleteHeap(MinHeap *h)
{
    if (h->size == 0)
    {
        cout << "Heap Underflow" << endl;
        return;
    }
    cout << h->arr[0] << " deleted from the Heap!" << endl;
    h->arr[0] = h->arr[h->size - 1];
    h->size--;
    if (h->size == 0)
        return;
    heapify(h, 0);
}
void destroyHeap(MinHeap *h)
{
    delete[] h->arr;
    h->arr = nullptr;
}
int main()
{
    MinHeap h1;
    initHeap(&h1, 6);
    insert(&h1, 1);
    insert(&h1, 2);
    insert(&h1, 3);
    printHeap(&h1);
    insert(&h1, 134);
    insert(&h1, 142);
    insert(&h1, 156);
    printHeap(&h1);
    deleteHeap(&h1);
    printHeap(&h1);
    deleteHeap(&h1);
    printHeap(&h1);
    destroyHeap(&h1);
    return 0;
}