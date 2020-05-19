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
       int arr[n];
       int a[n];
       for (int l = 0; l < n; ++l) {
           cin>>a[l];
       }
       for (int i = 0; i <n ; ++i) {
           arr[i]=1;
       }
       for (int j = n-2; j >=0 ; --j) {
           if((a[j] > 0 && a[j+1] < 0) || (a[j] < 0 && a[j+1] > 0)){
               arr[j]=arr[j+1]+1;
           }
       }
       for (int k = 0; k < n; ++k) {
           cout<<arr[k]<< " ";
       }
       cout<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
