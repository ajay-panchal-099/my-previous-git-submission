 
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

      int a;
      set<int>s;
    for (int i = 0; i <4 ; ++i) {
        cin>>a;
        s.insert(a);
    }
    cout<<4-s.size();
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

