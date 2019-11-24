// Made By :- Ajay Kumar
// Date :- 01/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
bool comp(const pair<int, int> &i,const pair<int, int> &j){
    return (i.second < j.second);
}
int32_t main() {
      IOS
      int t;
      cin>>t;
      int order,prep;
    vector<pair<int, int> >p;
    for (int j = 0; j <t ; ++j) {
        cin>>order>>prep;
        p.emplace_back(j+1,order+prep);
    }
    sort(p.begin(),p.end(),comp);
    for (int i = 0; i < t; ++i) {
      cout<<p[i].first<<" ";
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
