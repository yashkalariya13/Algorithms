#include <bits/stdc++.h>
using namespace std;
void findMin(int sum){
  int a=0;
  int b=0;
  while(sum>0){
    if(sum%7==0){
      b++;
      sum-=7;
    }else if(sum%4==0){
      a++;
      sum-=4;
    }else{
      a++;
      sum-=4;
    }
  }
  if(sum<0){
    cout<<-1;
  }
  for(int i=0;i<a;i++){
    cout<<"4";
  }
  for(int i=0;i<b;i++){
    cout<<"7";
  }
}
int main()
{
  //write your code here
  int N;
  cin>>N;
  findMin(N);
  cout<<endl;
  return 0;
}