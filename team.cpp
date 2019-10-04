 
// Made By :- Ajay Kumar
// Date :- 01/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      int n,x=0;cin>>n;
      while(n--){
          int a[3],c=0;
          for (int i = 0; i <3 ; ++i) {
              cin>>a[i];
              if(a[i]==1)
                  c++;
          }
          if(c>=2)
              x++;
      } cout<<x;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
