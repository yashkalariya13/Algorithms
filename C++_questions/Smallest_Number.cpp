#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k; cin>>n;
  int arr[n], hash[100001] = {0};
  for(int i=0; i<n; i++){
    cin>>arr[i];
    hash[arr[i]]++;    //store the frequency of each element
  }
  cin>>k;

  //finding the smallest element having frequency k
  for(int i=0; i<100001; i++){
    if(hash[i] == k){
      cout<<i;
      break;
    }

  }
  return 0;
}