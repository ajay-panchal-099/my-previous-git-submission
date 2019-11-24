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
      int n;
      cin>>n;
      int a[n];
      int hash[100]{0};
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        hash[a[i]]+=1;
    }
    for (int j = 0; j < n; ++j) {
        if(hash[a[j]]==1){
            cout<<a[j]<<endl;
            break;
        }
    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
