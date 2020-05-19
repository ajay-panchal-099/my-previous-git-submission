#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool comp (const pair<int,int> &a,const pair<int,int> &b){
    return a.second < b.second;
}
int32_t main(){
   IOS
   int t;
   cin>>t;
   vector<pair<int, int> >p;
   int a,b;
    for (int i = 0; i < t; ++i) {
        cin>>a>>b;
        p.emplace_back(make_pair(a,b));
    }
    sort(p.begin(),p.end(),comp);
   /* for (int k = 0; k < t; ++k) {
        cout<<p[k].first<<" "<<p[k].second <<endl;
    }*/
    int count=1;
     int last=0;
    for (int j = 1; j < t; ++j) {
        if( p[j].first >= p[last].second)
        {count++;last=j;}
    }
    cout<<count<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
