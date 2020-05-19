#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define vi vector<int>
#define pr pair<int,int>
#define endl "\n"
#define all(c) (c).begin(), (c).end()
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        int m; cin>>m;
        int mt[n];
        for (int i = 0; i <n ; ++i) {
            cin>>mt[i];
        }
        map<int,int> ma;
        for (int j = 0; j < n; ++j) {
            int x; cin>>x;
            ma[mt[j]] += x;
        }

        /*  for(auto it = ma.begin(); it!=ma.end();it++ ){
                cout<<it->first<<" ";
                  cout<< it->second<<" ";
          }*/
        int min= MOD;

        for(auto it = ma.begin(); it!=ma.end();it++ ){
            if(it->second < min){
                min = it->second;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC

/*
 * 1
6
4
1 2 3 3 2 2
7 3 9 1 1 1
 */
