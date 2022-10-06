#include <bits/stdc++.h>
using namespace std;

int main()
{
  int T;cin>>T;
  while(T--)
  {
    int N;cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
      cin>>arr[i];
    int largest = arr[N-1];
    cout<<arr[N-1]<<" ";
    for(int i=N-2;i>=0;i--)
    {
      if(arr[i]>=largest)
      {
        largest = arr[i];
        cout<<arr[i]<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}

