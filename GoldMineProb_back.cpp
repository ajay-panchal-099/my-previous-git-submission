#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int arr[20][20];
int maximum(int i, int j, int n, int m){
    if(i>=n || j>= m || i< 0 || j<0)
        return 0;
   /* if(i==n-1 && j==n-1)
        return arr[i][j];*/
    if(i==n-1 && j==m-1)
        return arr[i][j];

    int x =arr[i][j] + maximum(i+1,j+1,n,m);
    int y = arr[i][j]+maximum(i,j+1,n,m);
    int z = arr[i][j]+ maximum(i-1,j+1,n,m);
   // return x+y+z;
   return max(x,max(y,z));
}
int32_t main(){
   IOS
   int t;
   cin>>t;
   while(t--){
       int n ,m ;
       cin>>n>>m;

      // int arr[n][m];
       for (int i = 0; i <n ; ++i) {
           for (int j = 0; j < m; ++j) {
               cin>>arr[i][j];
           }
       }
      int maxi=0;
       for (int k = 0; k < n; ++k) {
           int localmax =  maximum(k,0,n,m);
           if(localmax > maxi)
               maxi=localmax;
       }
       cout<<maxi<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
