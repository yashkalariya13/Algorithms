
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int lowerBound(long long array[], int length, long value) {
    int low = 0;
    int high = length;
    while (low < high) {
        int mid = (low + high) / 2;
        if (value <= array[mid]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
int upperBound(long long array[], int length, long value) {
    int low = 0;
    int high = length;
    while (low < high) {
        int mid = (low + high) / 2;
        if (value >= array[mid]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main(){   
    int N;
    cin>>N;
    long long arr[N];
    long long sum[N];
    for(int i=0;i<N;i++)
     cin>>arr[i];
    sort(arr,arr+N);

    sum[0]=arr[0];
    for(int i=1;i<N;i++)
     sum[i]=sum[i-1] + arr[i];

    int Q;
    cin>>Q;
    while(Q--){
        int X,Y;
        cin>>X>>Y;
         long long ans=0;    
         int xind=lowerBound(arr,N,X);
         int yind=upperBound(arr,N,Y);
         if(xind !=0 && yind !=N)
          ans=sum[xind-1] + (sum[N-1]-sum[yind-1]);
         else if(xind==0 && yind !=N)
          ans=(sum[N-1]-sum[yind-1]);
         else if(xind!=0 && yind ==N)
          ans=sum[xind-1];

     cout<<ans<<"\n";

      }
}