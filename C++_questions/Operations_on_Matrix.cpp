#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int M;
    int N;
    cin>>M;
    cin>>N;
    
    int m1[M][N];
    int m2[M][N];
    
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        cin>>m1[i][j];
      }
    }
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        cin>>m2[i][j];
      }
    }
    
    int sum_matrix[M][N];
    
    for(int i=0;i<M;i++){
       for(int j=0;j<N;j++){
         sum_matrix[i][j] = m1[i][j] + m2[i][j];
       }  
    }
    
    int product_matrix[M][N];
    
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        product_matrix[i][j]=0;
        for(int k=0;k<N;k++){
          product_matrix[i][j]+=m1[i][k]*m2[k][j]; 
        }
      }
    }
    
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        cout<<sum_matrix[i][j]<<" ";
      }
      cout<<endl;
    }
    
    for(int i=0;i<M;i++){
      for(int j=0;j<N;j++){
        cout<<product_matrix[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
  }