#include <bits/stdc++.h>
  using namespace std;
  void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r){
    int pivot=arr[r];         //pivot element is the rightmost element
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);        //the pivot element
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      int N;
      cin>>N;
      int arr[N];
      for(int i=0;i<N;i++){
        cin>>arr[i];
      }
      
      quickSort(arr,0,N-1);
      
      for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      T--;
    }
    return 0;
  }