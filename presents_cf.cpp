 
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
      int t;cin>>t;
     vector<int>a(t);
    for (int i = 0; i < t; ++i) {
        cin>>a[i];
    }
  vector<int>::iterator pos;
    for (int j = 0; j <t ; ++j) {
         pos=find(a.begin(),a.end(),j+1);
        cout<<pos - a.begin() + 1<<" ";
    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

