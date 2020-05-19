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
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
     int t; cin>>t;
     while(t--){
         int n; cin>>n;
         int q; cin>>q;
         int maxx=0;
         int m[n];
         for (int i = 0; i < n; ++i) {
             int a; cin>>a;
             m[i] = max(maxx,a);
             if(maxx < a)
                 maxx= a;
         }
         while(q--){
             int x; cin>>x;
             cout<<m[x-1]<<endl;
         }
     }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
