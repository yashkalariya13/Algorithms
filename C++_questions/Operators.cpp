#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int X;
    int Y;
    cin>>X>>Y;
    if(X<Y){
      cout<<X<<" is smaller than "<<Y;
    }else if(X==Y){
      cout<<X<<" is equal to "<<Y;
    }else{
      cout<<X<<" is greater than "<<Y;
    }
    return 0;
  }