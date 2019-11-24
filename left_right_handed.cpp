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
      int l,r,a;
      cin>>l>>r>>a;

          while(l<r && a>0){
              l++;
              a--;
          }
          while(r<l && a>0){
              r++;
              a--;
          }
          while(r==l && a>=2)
          {
              r++;l++;a-=2;
          }
          cout<<2 * min(l,r)<<endl;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
