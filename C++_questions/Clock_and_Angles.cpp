#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int min(int x,int y){
  return (x<y) ? x:y;
}
int main()
{
  //write your code here
  int T;
  cin>>T;
  while(T>0){
    int h;
    int m;
    cin>>h>>m;
    int hour_angle = 0.5*(h*60+m);
    int minute_angle = 6*m;
    int angle = abs(hour_angle-minute_angle);
    angle = min(360-angle,angle);
    cout<<angle<<endl;
    T--;
  }
  return 0;
}