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
   int k;
   cin>>k;
   vector<int>arr(n);
   for (int &x : arr)
       cin>>x;

   vector<int>dp(n,INT_MAX);
   dp[0]=0;
    for (int i = 0; i < n; ++i) {
        for( int j =i+1; j<=k+i;j++){
                if(j<n) dp[j] = min(dp[j],dp[i] + abs(arr[i]-arr[j]));
        }
    }
   cout<<dp[n-1]<<endl;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
