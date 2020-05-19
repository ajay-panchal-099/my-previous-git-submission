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
      int n,k;
      cin>>n>>k;
      int arr[n];
       for (int i = 0; i < n; ++i) {
           cin>>arr[i];
       }
       sort(arr,arr+n);
        int s1=0,s2=0,s3=0,s4=0;
       for (int j = 0; j < k; ++j) {
           s1+=arr[j];
       }
       for (int l = k; l < n; ++l) {
           s2+=arr[l];
       }
       for (int m = n-1; m > n-k-1 ; --m) {
           s3+=arr[m];
       }
       for (int i1 = n-k-1; i1 >=0 ; --i1) {
           s4+=arr[i1];
       }

       int g1 = abs(s4-s3);
       int g2 = abs(s2-s1);
       cout<<s1<<" "<<s2<<" "<<s3<<" "<<s4<<endl;
       if(g1>g2)
           cout<<g1<<endl;
       else
           cout<<g2<<endl;

   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
