#include <bits/stdc++.h>
using namespace std;

void rotate_by_one(int arr[],int n)
{
  int temp = arr[n-1];
  int i;
  for(i=n-1;i>0;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[i] = temp;
}

int main()
{
  int T;cin>>T;
  while(T--)
  {
    int N,K;cin>>N>>K;
    K%=N;
    int arr[N];
    for(int i=0;i<N;i++)
      cin>>arr[i];

    for(int i=0;i<K;i++)
    {
      rotate_by_one(arr,N);
    }

    for(int i=0;i<N;i++)
      cout<<arr[i]<<" ";
    cout<<"\n";
  }

  return 0;
}
