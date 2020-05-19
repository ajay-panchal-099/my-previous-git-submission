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
   int arr[]={2048,1024,512,256,128,64,32,16,8,4,2,1};
   while(t--){
       int n;
       cin>>n;
       int i=0;
       int count=0;
       while (n>0){
           if(arr[i]<=n){
               n-=arr[i];
               count++;
           } else
               i++;
       }
      cout<<count<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
