 
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
      int n;
      cin>>n;
      int a[n+1];
    for (int i = 0; i < n+1; ++i) {
        a[i]=0;
    }
    for (int i = 1; i < n+1; ++i) {
        cin>>a[i];
    }
    int q,w,b;
    cin>>q;
    for (int j = 0; j < q; ++j) {
        cin>>w>>b;
        a[w-1]+=b-1;
        a[w+1]+=a[w]-b;
        a[w]=0;
    }

    for (int k = 1; k < n+1; ++k) {
        cout<<a[k]<<endl;
    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

