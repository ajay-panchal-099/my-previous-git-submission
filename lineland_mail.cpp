 
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
     int n;cin>>n;
     int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    cout<<abs(a[1]-a[0])<<" "<<abs(a[n-1]-a[0])<<endl;
    for (int j = 1; j < n-1; ++j) {
        cout<<min(abs(a[j]-a[j-1]),abs(a[j+1]-a[j]))<<" ";
        cout<<max(abs(a[j]-a[0]),abs(a[n-1]-a[j]))<<endl;
    }
    cout<<abs(a[n-1] - a[n-2])<<" ";
    cout<<abs(a[n-1] - a[0]);
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

