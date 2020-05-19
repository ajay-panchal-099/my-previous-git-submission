#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int M = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int binpow(int a, int b, int MOD){
    a%=MOD;
    int res = 1;
    while(b>0){
        if(b&1)
            res = (res*a) % MOD;
        a = (a *a) % MOD;
        b >>= 1;
    }
  return res;
}


int32_t main(){
   IOS

   int t;
   cin>>t;
   int a,b,c;
   while(t--){
       cin>>a>>b>>c;
       int x = binpow(b,c,M-1);
       cout<<binpow(a,x,M)<<endl;
   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
