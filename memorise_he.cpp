 

// Made By :- Ajay Kumar
// Date :- 01/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
    IOS
    int n;cin>>n;
    vector<int>a(n);
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
    int q;cin>>q;
    int b[q];
    for (int j = 0; j <q ; ++j) {
        cin>>b[j];
    }
    sort(a.begin(),a.end());
    for (int k = 0; k <n ; ++k) {
        auto x = lower_bound(a.begin(),a.end(),b[k]);
        auto y = upper_bound(a.begin(),a.end(),b[k]);
        if((y-a.begin()-(x-a.begin()))==0)
            cout<<"NOT PRESENT"<<endl;
        else
            cout<<(y-a.begin()-(x-a.begin()))<<endl;
    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
