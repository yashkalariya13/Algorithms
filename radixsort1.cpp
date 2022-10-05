#include <iostream>
using namespace std;
void count_sort(int *arr, int n, int unit)
{
    int count[10] = {0};
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / unit) % 10]++;
    }
    for (int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        temp[count[(arr[i] / unit) % 10] - 1] = arr[i];
        count[(arr[i] / unit) % 10]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
void radix_sort(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        for (int i = 1; max / i > 0; i = i * 10)
        {
            count_sort(arr, n, i);
        }
    }
}
int main()
{
    int size;
    cout << "ENter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "\nEnter the array elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    radix_sort(arr, size);
    cout << "\nAfter sorting the array is  : \n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}