#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool sort(const pair<int, int>&a,const  pair<int,int>&b){
    return a.second<b.second;
}
int32_t main(){
   IOS
   int n;
   cin>>n;
   int dp[n];
   vector<pair<int,pair<int,int> > >p;
    for (int i = 0; i < n; ++i) {
        int a,b,c;
        cin>>a>>b>>c;
        p.emplace_back(a,make_pair(b,c));
    }
    sort(p.begin(),p.end());

    for (int l = 0; l < n; ++l) {
        dp[l] = p[l].second.second;
    }

    for (int j = 1; j < n; ++j) {
        for (int k = 0; k < j; ++k) {
            if(p[j].first > p[k].second.first){
                dp[j] = max(dp[j],dp[k]+p[j].second.second);
            }
        }
    }
   /* for (int j = 0; j < n; ++j) {
        cout<<p[j].first << p[j].second.first<<p[j].second.second<<endl;
    }*/
   int localmax = 0;
    for (int l = 0; l < n; ++l) {
        if(localmax<dp[l])
            localmax = dp[l];
    }
    cout<<localmax<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
