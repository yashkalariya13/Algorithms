#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of Rows"<<endl;
    cin>>rows;
    int i=rows;
    while(i>=1){
        int spaces=0;
        while(spaces<=rows-i){
            cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
