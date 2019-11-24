 
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
      int a,b;
      cin>>a>>b;
      int m=0;
    for (int i = a; i <=b ; ++i) {
        for (int j = a; j <=b ; ++j) {
            if((i^j)>m)
                m=i^j;
        }
    }
    cout<<m;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
