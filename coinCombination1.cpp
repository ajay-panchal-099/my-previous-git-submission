#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define INF 1000000007;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int coin(const int arr[],int n,int sum){
   int dp[sum+1];

    for (int i = 0; i <= sum ; ++i) {
        dp[i] =0;
    }
    dp[0]=1;

    for (int j = 1; j <= sum ; ++j) {
        for (int i = 0; i < n; ++i) {
           if(j>=arr[i]) dp[j] += dp[j-arr[i]];
        }
        dp[j]%=MOD;
    }
    return dp[sum];
}
int32_t main(){
    IOS
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }

    int coins = coin(arr,n,sum);

    cout<<coins<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
