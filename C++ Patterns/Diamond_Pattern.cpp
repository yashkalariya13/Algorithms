#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int spaces=0;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int k=0;
        while(k!=(2*i-1)){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    int a=n;
    while(a>=1){
        int spaces=0;
        while(spaces<=n-a){
            cout<<" ";
            spaces++;
        }
        int k=0;
        while(k!=(2*a-1)){
            cout<<"*";
            k++;
        }
        cout<<endl;
        a--;
    }
    return 0;
}