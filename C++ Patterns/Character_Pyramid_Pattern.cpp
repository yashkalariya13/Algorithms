#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i=1;
    char ch='A';
    while(i<=n){
        int spaces=0;
        while(spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int k=0;
        while(k!=(2*i-1)){
            cout<<ch;
            k++;
            ch++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}