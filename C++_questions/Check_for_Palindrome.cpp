#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int T;
    cin>>T;
    while(T>0){
      int N;
      cin>>N;
      string S;
      cin>>S;
      int i=0;
      int j=N-1;
      int flag=0;
      int move=0;
      while(i<=j){
        if(S[i]!=S[j] && flag==0){
          flag++;
          j--;
        }
        else if(S[i]!=S[j] && flag==1){
          flag=0;
          move++;
          break;
        }else{
          i++;
          j++;
        }
      }
      if(move==0){
          cout<<1;
      }
      else{
        i=0;
        j=N-1;
        while(i<=j){
          if(S[i]!=S[j] && flag==0){
            i++;
            flag++;
          }else if(S[i]!=S[j] && flag==1){
            move++;
            break;
          }else{
            i++;
            j--;
          }
        }
        if(move==2){
          cout<<0;
        }else{
          cout<<1;
        }
      }
      cout<<endl;
      T--;
    }
    return 0;
  }