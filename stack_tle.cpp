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
       int n;
       cin>>n;
       int arr[n];
       for (int i = 0; i < n; ++i) {
           cin>>arr[i];
       }
       vector<int>v;
       v.push_back(arr[0]);
       int k =0;
       int i=0;
       for (int j = 1; j < n; ++j) {
           if(v[k] < arr[j]){
               v.push_back(arr[j]);
               k++;
           }
           else{
               i=0;
               while(i<v.size()) {
                   if(v[i] > arr[j]){
                       v[i]=arr[j];
                       break;
                   }
                   else {i++;}
                  // if(i==v.size())
                     //  i=0;
               }
           }

       }
       cout<<v.size()<<" ";
       for (int l = 0; l < v.size(); ++l) {
           cout<<v[l]<<" ";
       }
       cout<<endl;
   }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
