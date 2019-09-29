// Made By :- Ajay Kumar
// Date :- 01/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
bool compare(const pair<int, int>&i, const pair<int, int>&j)
{
    return i.first < j.first;
}
int32_t main() {
      IOS
      int n,k;
      cin>>n>>k;
      vector<pair<int,int> >p;
      int x,y,sum=0,imp=0;
    for (int i = 0; i <n ; ++i) {
        cin>>x>>y;
        sum+=x;
        if(y==1)
            imp++;
        p.push_back(make_pair(x,y));
    }
    int diff=imp-k;
   // cout<<diff<<endl;
    sort(p.begin(),p.end(),compare);
    for (int j = 0; j < n; ++j) {
        if(p[j].second==1 && diff>0)
        {
            //cout<<p[j].first<<endl;
          sum-=2*(p[j].first);
              //  cout<<sum<<endl;
                diff--;
        }
    }
    cout<<sum<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
