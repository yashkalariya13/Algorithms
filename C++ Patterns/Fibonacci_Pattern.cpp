#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int x=0;
        int y=1;
        int z=0;
        int j=1;
        while(j<=i){
            z=x+y;
            x=y;
            y=z;
            cout<<z<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}