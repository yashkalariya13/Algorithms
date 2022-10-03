#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int i = start;
    int j = end;
    while (i <= j)
    {
            
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i <= j)
            swap(arr[i], arr[j]);
            else
            break;
    }
    swap(arr[start], arr[j]);
    return j;
}
void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int part = partition(arr, start, end);
        quickSort(arr, start, part - 1);
        quickSort(arr, part + 1, end);
    }
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    cout << "Enter array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, size);

    cout << "Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}