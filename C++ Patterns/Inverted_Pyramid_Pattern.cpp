#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=n;
    while(i>=1){
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
        i--;
    }
    return 0;
}
