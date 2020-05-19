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

   int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }

    sort(a,a+n);

    int median = n/2;

    int cost = 0;

    for (int j = 0; j < n; ++j) {
        cost+= abs(a[j]-a[median]);
    }

    cout<<cost<<endl;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
