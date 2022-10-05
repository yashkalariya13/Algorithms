#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      int N;
      cin>>N;
      if((N%4==0) && (N%100!=0) || (N%400==0)){
        cout<<"Yes";
      }else{
        cout<<"No";
      }
      cout<<endl;
      T--;
    }
    return 0;
  }