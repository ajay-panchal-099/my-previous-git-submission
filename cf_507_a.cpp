 
// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
 bool  sortby( const pair<int, int> &a , const pair<int, int> &b ){
      return a.first<b.first;
 }
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      int n;cin>>n;
      int k;cin>>k;

      vector<pair<int,int> >p;
      vector<int>x;

    for (int i = 0; i < n; ++i) {
        int a;
        cin>>a;
        p.emplace_back(make_pair(a,i+1));
    }

    sort(p.begin(),p.end(),sortby);

    for (int j = 0; j < n; ++j) {
        if(p[j].first<=k){
            x.push_back(p[j].second);
            k-=p[j].first;
        }
    }
    cout<<x.size()<<endl;
    for(auto &a :x) cout<<a<<" ";
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
