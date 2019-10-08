// Made By :- Ajay Kumar
// Date :- 07/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
    IOS
    int n;cin>>n;
    map<string, int>mp;
    string str;
    for (int i = 0; i < n; ++i) {
        cin>>str;
        mp[str]++;
    }
    map<string , int >::iterator itr;
    /*for(itr=mp.begin();itr!=mp.end();itr++)
        cout<<itr->first<<" - "<<itr->second<<endl;*/
     int maxi=0;
    for(itr=mp.begin();itr!=mp.end();itr++){
        if(maxi < itr->second)
            maxi = itr->second;
    }
  //  cout<<maxi<<endl;

    for(itr=mp.begin();itr!=mp.end();itr++){
        if(maxi==itr->second)
        {
            cout<<itr->first;
            break;
        }
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

 
