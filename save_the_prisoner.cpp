 
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
      int t;cin>>t;
      while(t--){
          int n;cin>>n;
          int m;cin>>m;
          int s;cin>>s;

          if(m>n|| n>m)m%=n;

              s=s+m-1;
             if(s==0)
                 cout<<n<<endl;
             else{
                 if(s>n)s%=n;
                 cout<<s<<endl;
             }
      }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
