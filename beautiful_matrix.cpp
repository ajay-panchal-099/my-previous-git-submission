 
// Made By :- Ajay Kumar
// Date :- 04/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      int a[5][5];
      int x=0,y=0;
    for (int i = 0; i <5 ; ++i) {
        for (int j = 0; j < 5 ; ++j) {
            cin>>a[i][j];
            if(a[i][j]==1){
                x=i;y=j;
            }
        }
    }
    cout<<abs(x-2)+abs(y-2);

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
