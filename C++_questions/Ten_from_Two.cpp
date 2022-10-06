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
      int op_count=0;
      if(n%10==0){
        cout<<0;
      }else{
        n=n*2;
        op_count++;
        if(n%10==0){
          cout<<op_count;
        }else{
          cout<<-1;
        }
      }
      cout<<endl;
      T--;
    }
    return 0;
  }