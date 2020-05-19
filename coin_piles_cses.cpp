#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
   IOS
   int t;
   cin>>t;
   while (t--){
       int a,b;
       cin>>a>>b;
       if((a+b)%3==0 && (abs(a-b)<=min(a,b)))
           cout<<"YES"<<endl;
       else
           cout<<"NO"<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
