 
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
          vector<int>v;
          v.push_back(0);
          for (int i = 0; i <n-1 ; ++i) {
              int f=0;
              for (int j = i-1; j >=0 ; --j) {
                  if(v[j]==v[i])
                  { f=1;v.push_back(i-j);break;}
              }
              if(f==0)
                  v.push_back(0);
          }                              //// 0,0,1,0,2,0,2,2,0 sequence
         int c=0;
          int x=v[n-1];
          for (int k = 0; k < v.size(); ++k) {
              if(x==v[k])
                  c++;
          }
          cout<<c<<endl;
      }

      return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
