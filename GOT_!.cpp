 
// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int32_t main() {
      IOS
     int t;
     string str;
     cin>>str;
     map<char,int>mp;
    for (int i = 0; i < str.length(); ++i) {
        mp[str[i]]++;
    }
    map<char,int>::iterator it;
    int even=0,odd=0;
    for (auto it = mp.begin(); it!=mp.end() ;it++) {
        if(it->second % 2 !=0)
            odd++;
    }
    if(odd>1){
        cout<<"NO"<<endl;
    } else cout<<"YES"<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
