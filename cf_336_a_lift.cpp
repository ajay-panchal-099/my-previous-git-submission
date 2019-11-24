 
// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
bool sortby(const pair<int, int> &a, const pair<int, int> &b ){
    return a.first> b.first;
}
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
     int p,tf;
      cin>>p>>tf;

      vector<pair<int, int> >pi;
    for (int i = 0; i <p ; ++i) {
        int a,b;
        cin>>a>>b;
        pi.emplace_back(make_pair(a,b));
    }

    sort(pi.begin(),pi.end(),sortby);
    int seconds=tf - pi[0].first;
    for (int j = 0; j < p; ++j) {
        if(pi[j].second > seconds){
            seconds+=pi[j].second-seconds;
        }
        if(j+1<p) seconds+=pi[j].first - pi[j+1].first;
    }
     if(pi[p-1].second> seconds) seconds+=pi[p-1].second-seconds;
     seconds+= pi[p-1].first;
     cout<<seconds<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
