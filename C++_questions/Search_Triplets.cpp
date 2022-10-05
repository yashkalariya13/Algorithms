#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int left[mid-start+1]={0};
    int right[end-mid]={0};
    for(int i=start; i<mid+1; i++){
        left[i-start] =  arr[i];
    }
    for(int i=mid+1; i<=end; i++){
        right[i-(mid+1)] = arr[i];
    }
    int leftIndex=0, rightIndex=0, arrIndex=start;
    for( ; leftIndex<=mid-start && rightIndex<end-mid; arrIndex++){
        if(left[leftIndex]<right[rightIndex]){
            arr[arrIndex] = left[leftIndex++];
        }
        else{
            arr[arrIndex] = right[rightIndex++];
        }
    }

    while(leftIndex<=mid-start){
        arr[arrIndex++] = left[leftIndex++];
    }

    while(rightIndex<end-mid){
        arr[arrIndex++] = right[rightIndex++];
    }

}

void mergeSort(int arr[], int start, int end){
    if(end==start)
        return;
    mergeSort(arr,start,(start+end)/2);
    mergeSort(arr,((start+end)/2)+1,end);
    merge(arr,start,(start+end)/2,end);
}


int main()
{
  int T;
  cin>>T;

  while(T--){

    int N;
    cin>>N;

    int arr[N], hash[9999999]={0};
    for(int i=0; i<N; i++){
      cin>>arr[i];
      hash[arr[i]] = 1;
    }
    mergeSort(arr,0,N-1);
    int flag = 1;
    for(int i=N-1; i>=0; i--){
      for(int j=0; j<N;j++){
        if( arr[i]-arr[j]>=0 && hash[arr[i]-arr[j]]>0 && arr[i]-arr[j]!=arr[j]){
          cout<<arr[i]<<" "<<arr[j]<<" "<<arr[i]-arr[j]<<endl;
          flag = 0;
          break;
        }
      }
      if(!flag)
        break;
    }

    if(flag)
      cout<<-1<<endl;

  }
}