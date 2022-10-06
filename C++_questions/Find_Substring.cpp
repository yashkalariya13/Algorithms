#include <bits/stdc++.h>
    using namespace std;
    int main()
    {
      int T;
      cin>>T;
      while(T--){
        char s[1001], t[1001];
        cin>>s>>t;
        bool found = false;
        if(strlen(s)>=strlen(t)){
            for(int i=0; i<=strlen(s)-strlen(t) && !found; i++){
              found = true;
              for(int j = 0; j<strlen(t); j++){
                  if( s[i+j] != t[j] ){
                      found = false;
                      break;
                  }
                }
            }
        }
        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";
      }
      return 0;
    }