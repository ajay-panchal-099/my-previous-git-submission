 
// Made By :- Ajay Kumar
// Date :- 04/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
     int r,k;
      cin>>r>>k;
      int count=1;
      int x=1,y=r;
      while(r%10!=0 && r%10!=k){
          count++;
          x++;
          r= y*x;
      }

    cout<<count;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

