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
      int n,m;
      cin>>n>>m;
      char a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            a[i][j]='.';
        }
    }   int c=1,r=3;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(i%2==0)
                a[i][j]='#';
            if(i%2!=0 && r<n)
            {a[r][0]='#';r+=4;}
            if(i%2!=0  && c<n)
            {a[c][m-1]='#'; c+=4;}
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout<<a[i][j];
        } cout<<endl;
    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
