// Made By :- Ajay Kumar
// Date :- 05/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      string str;
      cin>>str;
    stringstream ss(str);
    int x=0;
    vector<int>v;
    while(ss>>x)
        v.push_back(x);

    sort(v.begin(),v.end());

    if(v.size()==1)
        cout<<v[0];
    else{
        for(int i=0;i<v.size()-1;i++)
            cout<<v[i]<<"+";
        cout<<v[v.size()-1];
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

 
