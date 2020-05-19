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
     int n1,n2,n3;
    cin>>n1>>n2>>n3;
     int x;
     map<int,int>m;
    for (int i = 0; i < n1; ++i) {
        cin>>x;
        m[x]++;
    }
    for (int j = 0; j <n2 ; ++j) {
        cin>>x;
        m[x]++;
    }
    for (int k = 0; k <n3 ; ++k) {
        cin>>x;
        m[x]++;
    }
    int c=0;
    for ( auto it = m.begin(); it!=m.end(); it++){
        if(it->second>=2)
            c++;
    }
    cout<<c<<endl;
    for ( auto it = m.begin(); it!=m.end(); it++){
        if(it->second>=2)
            cout<<it->first<<endl;
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
