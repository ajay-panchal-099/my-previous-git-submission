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
   while(t--){
       int n;
       cin>>n;

       int a[n],b[n];
       for (int i = 0; i < n; ++i) {
           cin>>a[i];
       }
       for (int j = 0; j < n; ++j) {
           cin>>b[j];
       }
       sort(a,a+n);
       sort(b,b+n);
       int sum=0;
       for (int k = 0; k <n ; ++k) {
           if(a[k]< b[k])
               sum+=a[k];
           else
               sum+=b[k];
       }
       cout<<sum<<endl;
   }



    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
