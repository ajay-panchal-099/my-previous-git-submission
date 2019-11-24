 
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
       int n;cin>>n;
       vector<int>v;
    for (int i = 0; i < n; ++i) {
        int a;
        cin>>a;
        v.push_back(a);
    }
        int count=0;
        int min=MOD;
        int index=0;
        for (int i = 0; i < n; ++i) {
            if(v[i]<min){
                min=v[i];
                index=i+1;
            }

        }
    for (int i = 0; i < n; ++i) {
        if(min==v[i]){
            count++;
        }
    }
        if(count>1) cout<<"Still Rozdil"<<endl;
        else cout<<index<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
