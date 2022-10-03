#include <iostream>  
using namespace std;  
  
int main ()  
{  
    int arr[50], num, temp, i, j;  
    cout<<"Enter the number of terms: ";
    cin >> num;  
    
    cout<<"Enter all the terms: ";
    for (i = 0; i < num; i++)  
        cin >> arr[i];
      
      
    for ( i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
      
        a[i]=a[i]+a[j];
        a[j]=a[i]-a[j];
//         a[i]=a[i]-a[j];
//         temp = arr[i];  
//         arr[i] = arr[j];  
//         arr[j] = temp;  
    }  
      
    for ( i = 0; i < num; i++)  
        cout << arr[i] << " ";  
  
    return 0;  
    
} 
