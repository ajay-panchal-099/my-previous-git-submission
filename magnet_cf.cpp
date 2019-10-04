 
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
      int n;cin>>n;
      int a[n];
      int c=1;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    for (int j = 0; j < n-1; ++j) {
        if(a[j]!=a[j+1])
            c++;
    }
    cout<<c;
      
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

