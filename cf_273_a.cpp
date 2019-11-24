 
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
      int sum=0;
    for (int i = 0; i < 5; ++i) {
        int a; cin>>a;
        sum+=a;
    }
    if(sum%5==0 && sum!=0)
        cout<<sum/5<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
