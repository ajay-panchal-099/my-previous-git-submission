// Made By :- Ajay Kumar
// Date :- 29/09/2019
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
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    int count=1;
    int m=a[0]+4;
    for (int j = 1; j < n; ++j) {
        
     if(a[j]>m){
         m=a[j]+4;
         count++;
     }
    }
     cout<<count<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
