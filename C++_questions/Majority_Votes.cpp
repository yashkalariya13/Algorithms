#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t; cin>>t;
  while(t--){
    int n; cin>>n;

    //storing frequency of votes in hash array
    int hash[1000000] = {0};
    int arr[n];
    int winner = -1;
    for(int i=0; i<n; i++){
      cin>>arr[i];
      hash[arr[i]]++;

      /* if frequency of votes becomes greater than half 
         of total votes, this element is our winner */
      if(hash[arr[i]] > n/2)
        winner = arr[i];
    }
    cout<<winner<<"\n";
  }

  return 0;
}
