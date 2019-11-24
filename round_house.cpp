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
      int n,a,b;
      cin>>n>>a>>b;

      if(b>=0){
          int x= (a+b)%n;
          if(x==0)
              cout<<n;
          else
              cout<<x;
      }
      else{
          int x=n-(abs(b)%n);
          int y=(a+x)%n;
          if(y!=0)cout<<y;
          else cout<<n;
      }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
