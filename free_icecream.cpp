 
// Made By :- Ajay Kumar
// Date :- 05/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      int n,sum;
      char x;
      int y;
      cin>>n>>sum;
      vector< pair<char,int > >p;
    for (int i = 0; i < n; ++i) {
        cin>>x>>y;
        p.emplace_back(make_pair(x,y));
    }
    int child=0,left=sum;

    for (int j = 0; j < n; ++j) {
        if(p[j].first=='+')
            left+=p[j].second;
        else
        {
            if(p[j].second <= left)
                left-=p[j].second;
            else
                child++;
        }
    }

    cout<<left<<" "<<child;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

