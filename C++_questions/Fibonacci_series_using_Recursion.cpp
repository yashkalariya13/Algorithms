#include <bits/stdc++.h>
  using namespace std;
  int fib(int n){
    if(n<=1){
      return n;
    }
    return fib(n-1)+fib(n-2);
  }
  int main()
  {
    int T;
    cin>>T;
    while(T>0){
      int N;
      cin>>N;
      int ans = fib(N);
      cout<<ans;
      cout<<endl;
      T--;
    }
    return 0;
  }