 
// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
bool mm(const pair<int,int>&a,pair<int,int>&b){
        return a.second>b.second;
}
int32_t main() {
    IOS
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > p;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        p.emplace_back(make_pair(a, b));
    }
    int sum = 0, j = 0,h=0;
    sort(p.begin(), p.end(), mm);

    while (j < k  && h < n)  {
    if (p[h].first != 0) {
        p[h].first *= 2;
        j++;
     }
      h++;
    }
    for (int l = 0; l <n ; ++l) {
        if(p[l].first < p[l].second)
            sum+=p[l].first;
        else
            sum+=p[l].second;
    }
     cout<<sum<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
