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
       //int arr[n];
       int k; cin>>k;
       int a[n];
       int sum=0;
       for (int l = 0; l < n; ++l) {
           cin>>a[l];
           sum+=a[l];
       }
       if(k>=sum)
           cout<<"Yes"<<endl;
       else
           cout<<"No"<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
