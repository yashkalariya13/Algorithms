#include <bits/stdc++.h>
using namespace std;

//function for swapping two values
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

//sorting a subarray in increasing order
void sortSubarray(int number[], int i, int j)
{
    while (i < j)
    {
        swap(number, i, j);
        i += 1;
        j -= 1;
    }
}

void findNextGreaterNumber(int arr[], int n)
{
    int lastDigitSeen = arr[n - 1], i, j;
    for (i = n - 2; i >= 0; i--)
    {
        if (lastDigitSeen > arr[i])
            break;
        lastDigitSeen = arr[i];
    }
    if (i >= 0)
    {
        for (j = n - 1; j > i; j--)
        {
            if (arr[j] > arr[i])
                break;
        }

        swap(arr, i, j);
        sortSubarray(arr, i + 1, n - 1);
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        int count = 0;
        long long num = N;

        //count the number of digits in n
        while (num > 0)
        {
            num /= 10;
            count++;
        }

        //storing all digits of n into an array
        int arr[count];
        int i = count - 1;
        while (N > 0)
        {
            arr[i--] = N % 10;
            N /= 10;
        }

        findNextGreaterNumber(arr, count);

        //printing all digits of the resultant number
        for (int j = 0; j < count; j++)
            cout << arr[j];
        cout << "\n";
    }
    return 0;
}