#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int arr[15][15];
int ways(int i, int j, int n, int m){
    if(i>n || j > m)
        return 0;
    if(i==n-1 && j==m-1)
        return 1;
    return ways(i+1,j,n,m)+ways(i,j+1,n,m);
}
int32_t main(){
   IOS
   int t;
   cin>>t;
   while(t--){
       int n,m;
       cin>>n>>m;
       int w = ways(0,0,n,m);
       cout<<w<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
