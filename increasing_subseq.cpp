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
   int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    vector<int>dp(n,1);

    for (int j = 1; j < n; ++j) {
        for (int k = 0; k < j ; ++k) {
            if(arr[k] < arr[j])
                dp[j] = max(dp[j],dp[k]+1);
        }
    }
    int max = -INT_MAX;
    for (int l = 0; l < n; ++l) {
        if(dp[l] > max)
            max = dp[l];
    }

    cout<<max<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
