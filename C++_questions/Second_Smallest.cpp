#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int X;
    int Y;
    int Z;
    cin>>X>>Y>>Z;
    int secondNumber = (X > Y) ? ((X>Z)?((Y>Z)?Y:Z):((X>Y)?X:Z)):((Y>Z)?((X>Z)?X:Z):((X>Y)?X:Y));
    cout<<secondNumber;
    return 0;
  }