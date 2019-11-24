 
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
    int n,k,q;
      cin>>n>>k>>q;
     vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
    k%=n;
    rotate(v.begin(),v.begin()+v.size()-k,v.end());

    while(q--){
      int i;
      cin>>i;
      cout<<v[i]<<endl;
    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
