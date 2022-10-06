#include <bits/stdc++.h>
using namespace std;
const int n = 10e5 + 10;
int arr[n];
int pf[n];
int main()
{
    int size;
    cin >> size;
    for (int i = 1; i <= size; i++)
    {
        cin >> arr[i];
        pf[i] = pf[i - 1] + arr[i];
    }
    int l, r;
    cin >> l >> r;
    cout << pf[r] - pf[l - 1];
    return 0;
}