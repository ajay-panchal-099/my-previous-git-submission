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
       int x,y,k,n;
       cin>>x>>y>>k>>n;
       vector<pair<int,int> >p;
       for (int i = 0; i < n; ++i) {
           int a,b;
           cin>>a>>b;
           p.emplace_back(make_pair(a,b));
       }
       int flag=0;
       for (int j = 0; j < n; ++j) {
           if(p[j].second <=k && p[j].first >= x-y){
               flag=1;
               break;
           }
       }
       if(flag)  cout<<"LuckyChef"<<endl;
       else cout<<"UnluckyChef"<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
