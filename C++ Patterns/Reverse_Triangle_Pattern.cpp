#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter the number of rows"<<endl;
    cin>>rows;
    int i=rows;
    while(i>=1){
        int space=0;
        while(space<=rows-i){
            cout<<" ";
            space++;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
