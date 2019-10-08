 
// Made By :- Ajay Kumar
// Date :- 08/10/2019
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
    char photo[n][m];
    int c=0,bw=0;
    for (int i = 0; i <n ; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>photo[i][j];
            if(photo[i][j]=='W' || photo[i][j]=='B' || photo[i][j]=='G')
                bw++;
            else
                c++;
        }
    }
    if(bw>0 && c==0)
        cout<<"#Black&White";
    else
        cout<<"#Color";

}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

