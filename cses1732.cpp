#include<bits/stdc++.h>
#define int long long
#define endl "\n"
#define all(c) (c).begin(), (c).end()
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}
int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);

    string text;
    cin>>text;
    vector<int> v(z_function(text));
    int l = v.size();
  // v.erase(remove(v.begin(),v.end(),0),v.end());
   set<int>s;
    for (int i = 0; i < l; ++i) {
        if(v[i]+i == l)
           s.insert(v[i]);
    }

    for(auto c: s)
        cout<<c<<" ";


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
