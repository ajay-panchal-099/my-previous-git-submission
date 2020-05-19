#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define all(c) (c).begin(), (c).end()
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
     int n; cin>>n;
     vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }
     vector<vector<int>>adj(n);
     vector<bool>visited(n,false);
     int k=0;
    for (int j = 0; j <n ; ++j) {
        if(!visited[j]){
            visited[j]=true;
            adj[k].push_back(j+1);
            int x = v[j]-1;
            adj[k].push_back(x+1);
            while(!visited[x]){
                adj[k].push_back(v[x]);
                visited[x] = true;
                x = v[x]-1;
            }
            k++;
        }
    }
    cout<<k<<endl;
    for (int i = 0; i < adj.size(); i++) {
        for (int j = 0; j < adj[i].size(); j++)
            cout << adj[i][j] << " ";
        cout << endl;
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
