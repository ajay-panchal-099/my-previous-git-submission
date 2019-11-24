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
     int a[3];
    for (int i = 0; i < 3; ++i) {
        cin>>a[i];
    }
    sort(a,a+3);
     int d=0;
     int m=a[1];
      d+=abs(a[0]-m) + abs(m-a[2]);
      cout<<d<<endl;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
