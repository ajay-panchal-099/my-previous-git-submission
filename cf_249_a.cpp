// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
     int n,m;cin>>n>>m;;
     int a[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    int bus=0;
    for (int j = 0; j < n; ++j) {
        if(a[j]<=m)
        {   bus++;
            int x=j+1,sum=a[j];
            while(sum+a[x] <=m && x<n){
                sum+=a[x];j++;x++;
            }
        }

    }
    cout<<bus<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
