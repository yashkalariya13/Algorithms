#include <iostream>
using namespace std;
int firstOcurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) // go to right part
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // go to left part
                {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}
int lastOcurrence(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) // Right wale part mei jaana h
        {
            s = mid + 1;
        }
        else if (key < arr[mid]) // Left wale part mei jaana h
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
}

int main()
{
    int arr[4] = {3, 4, 5, 1};
    int ans = PeakElement(arr, 4);
    cout << ans << endl;
    // int arr[8] = {1, 2, 3, 3, 3, 3, 3, 5};
    // cout << "First Occurrence of 3 is at index : " << firstOcurrence(arr, 8, 3) << endl;
    // cout << "Last Occurence of 3 is at index : " << lastOcurrence(arr, 8, 3) << endl;
    // int totalCount = (lastOcurrence(arr, 8, 3) - firstOcurrence(arr, 8, 3));
    // cout << totalCount << endl;

    return 0;
}