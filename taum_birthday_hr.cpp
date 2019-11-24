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
          int b,w,bc,wc,z;
          cin>>b>>w>>bc>>wc>>z;
          int total=0;

          if(bc+z < wc){
              total=bc*(b+w) + w*z;
          }
          else if(wc+z<bc){
              total=wc*(w+b) + b*z;
          }
          else{
              total=bc*b + wc*w;
          }
          cout<<total<<endl;
      }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
