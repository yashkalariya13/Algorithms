#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      int n;
      cin>>n;
      int sum=0;
      while(n>0){
        sum=sum+(n%10);
        n=n/10;
      }
      cout<<sum;
      cout<<endl;
      T--;
    }
    return 0;
  }