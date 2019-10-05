 
// Made By :- Ajay Kumar
// Date :- 05/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      char c1,c2;
      cin>>c1;
      cin>>c2;
      int hash[26]{0};
      int cc=0;
      while(c2!='}'){
          if(c2>=97 && c2<=122)
          {if(hash[c2-97]==0)
              {cc++;
             // cout<<hash[c2-97]<<" ";
                  hash[c2-97]+=1;}}
          cin>>c2;
      }
      cout<<cc;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

