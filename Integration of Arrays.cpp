# include <iostream>
using namespace std;
int integrationofArrays(int arr[], int arr2[], int n, int m){
 int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr[i] > arr2[j]) {
            j++;
        }
        else if (arr2[j] > arr[i]) {
            i++;
        }
        else {
             
            
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
}
int main(){
	int arr[]={1,2,3,4};
	int arr2[]={3,4,5,6};
	int size=4;
	int size1=4;
	integrationofArrays(arr,arr2,size,size1);
	
	
	return 0;
}
