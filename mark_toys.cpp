// Made By :- Ajay Kumar
// Date :- 01/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      int n;cin>>n;
      int sum;cin>>sum;
      int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    int count=0;

    for (int j = 0; j <n && a[j]<=sum; ++j) {
        sum-=a[j];
        count++;
    }
   cout<<count<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
