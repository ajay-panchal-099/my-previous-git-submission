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
const int MOD = 1000000007 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
     int t; cin>>t;
     while(t--){
         int n; cin>>n;
         int arr[n];
         int sum = 0;

         for (int i = 0; i < n; ++i) {
             cin>>arr[i];
         }
         sort(arr,arr+n,greater<int>());
         for (int j = 0; j < n; ++j) {
             if(arr[j]-j > 0)
                 sum+=arr[j]-j;
         }
         cout<<sum%MOD<<endl;
     }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
