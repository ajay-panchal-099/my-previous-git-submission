 
// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS

      int t;
      cin>>t;
      while(t--){
          int n;cin>>n;
          string str[n];
          for (int i = 0; i < n; ++i) {
              cin>>str[i];
          }
          int l=str[0].length();
          for (int j = 1; j < n; ++j) {
              for (int i = 0; i < l; ++i) {
                  if(str[j][i]=='1' && str[0][i]=='1'){
                      str[0][i]='0';
                  }
                  else if(str[j][i]=='0' && str[0][i]=='0'){
                      str[0][i]='0';
                  }
                  else{
                      str[0][i]='1';
                  }
              }
          }
          int c=0;
          for (int k = 0; k < l; ++k) {
              if(str[0][k]=='1')
                  c++;
          }
          cout<<c<<endl;
      }

      return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
