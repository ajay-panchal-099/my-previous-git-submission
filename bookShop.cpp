#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int dp[1001][100001];
int32_t main(){
   IOS

  int value,weight;
   cin>>value>>weight;

   int values[value+1];
    values[0]=0;
   int weights[value+1];
    weights[0]=0;
    for (int i = 1; i <=value ; ++i) {
        cin>>values[i];
    }
    for (int j = 1; j <= value ; ++j) {
        cin>>weights[j];
    }
    for (int k = 1; k <= value ; ++k) {
        for (int i = 1; i <= weight ; ++i) {
            if(i >= values[k] )  dp[k][i] = max(dp[k-1][i], weights[k] + dp[k-1][i-values[k]]);
            else dp[k][i] = dp[k-1][i];
        }
    }
    cout<<dp[value][weight]<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
