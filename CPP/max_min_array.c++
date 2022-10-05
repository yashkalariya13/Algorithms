#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  int max_no = INT_MIN;
  int min_no = INT_MAX;
  for(int i=0; i<n; i++){
    max_no = max(max_no,arr[i]);
    min_no = min(min_no,arr[i]);
  }
  cout<<"max no "<<max_no<<endl<<"min no "<<min_no;
  return 0;
}
