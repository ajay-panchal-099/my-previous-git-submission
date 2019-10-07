 
// Made By :- Ajay Kumar
// Date :- 06/10/2019
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
    int hash[100]{0};
    int x,index;
    for (int i = 0; i < 2; ++i) {
        cin>>x;
        for (int j = 0; j < x; ++j) {
            cin>>index;
            hash[index]=1;
        }
    }
    int flag=0;
    for (int k = 1; k <=n ; ++k) {
        if(hash[k]==0){
            cout<<"Oh, my keyboard!";
            flag=1;
            break;
        }
    }
    if(!flag)
        cout<<"I become the guy.";
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

