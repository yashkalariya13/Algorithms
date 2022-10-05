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

    int arr[N];
    int sorted[N];
    for(int i=0; i<N; i++){
      cin>>arr[i];
      sorted[i] = arr[i];
    }

    //Sorting array
    mergeSort(sorted,0,N-1);
    int count = 0;

    for(int i=0; i<N; i++)
      if(arr[i]!=sorted[i])
        count++;
    cout<<count<<endl;
  }
}