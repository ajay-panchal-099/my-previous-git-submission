#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
   IOS

   int n;
   cin>>n;

   int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    int best = a[0], sum=a[0];

    for (int j = 1; j < n; ++j) {
        sum = max(a[j], sum+a[j]);
        best = max(best,sum);
    }
    cout<<best<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
