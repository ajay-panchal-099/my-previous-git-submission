// @author - ajay panchal
#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define vi vector<int>
#define pr pair<int,int>
#define endl "\n"
#define all(c) (c).begin(), (c).end()
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS
     int t; cin>>t;
     while(t--){
       int n;
       cin>>n;
      .. int left =0, right=0;
       int arr[n];
       vi v;
         for (int i = 0; i < n; ++i) {
             cin>>arr[i];
             if(arr[i]==1)
                 v.pb(i);
         }
         bool flag = false;
         for (int j = 1; j < v.size(); ++j) {
            if(v[j] - v[j-1] < 6){
                flag = true;
                break;
            }
         }
         if(flag)
             cout<<"NO"<<endl;
         else
             cout<<"YES"<<endl;
     }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
