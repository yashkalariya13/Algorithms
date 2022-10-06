#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter Rows"<<endl;
    cin>>rows;
    int cols;
    cout<<"Enter Columns"<<endl;
    cin>>cols;
    int i=1;
    while(i<=rows){
        int j=1;
        while(j<=cols){
            if(i==1 || i==rows || j==1 || j==cols){
                cout<<"*";
            }else{
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
