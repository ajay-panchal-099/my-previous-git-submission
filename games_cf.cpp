 
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
      int a[n],b[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i]>>b[i];
    }

    int count=0;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < n; ++i) {
            if(a[j]==b[i])
                count++;
        }
    }
    cout<<count;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

