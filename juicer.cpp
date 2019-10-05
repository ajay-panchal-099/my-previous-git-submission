 
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
      int n,m,w;
      cin>>n>>m>>w;
      int j[n];
    for (int i = 0; i < n; ++i) {
        cin>>j[i];
    }
    int wc=0;
    int waste=0;
    for (int k = 0; k < n; ++k) {
            if(j[k]<=m)
                waste+=j[k];
            if(waste>w)
            {
                wc++;
                waste=0;
            }
    }
  cout<<wc;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

