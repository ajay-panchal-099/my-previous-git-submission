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
       int k;
       cin>>k;
       int arr[n];
       for (int i = 0; i < n; ++i) {
           cin>>arr[i];
           arr[i]+=k;
       }
       int count=0;
       for (int i = 0; i < n; ++i) {
           if(arr[i]%7==0)
               count++;
       }
     cout<<count<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
