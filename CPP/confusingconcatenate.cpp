#include <bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin >> n;
  int arr[n];
  int max_ind = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[max_ind])
    {
      max_ind = i;
    }
  }
  if (max_ind == 0)
  {
    cout << "-1" << endl;
  }
  else
  {
    cout << max_ind << endl;
    for (int i = 0; i < max_ind; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
    cout << n - max_ind << endl;
    for (int i = max_ind; i < n; i++)
    {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}