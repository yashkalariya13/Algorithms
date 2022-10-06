#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    int i=1;
    while(i<=rows){
        int spaces=0;
        while(spaces<=rows-i){
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
    return 0;
}
