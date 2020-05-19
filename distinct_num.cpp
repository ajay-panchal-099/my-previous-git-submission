#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
   IOS
   int n;
   cin>>n;

   set<int>s;
    for (int i = 0; i < n; ++i) {
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size()<<endl;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
