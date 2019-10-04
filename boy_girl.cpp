 
// Made By :- Ajay Kumar
// Date :- 04/10/2019
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
      int hash[100]{0};
      int count=0;
    for (int i = 0; i < str.length(); ++i) {
        if(hash[str[i]-'0'-49]==0)
        {
            hash[str[i]-'0'-49]+=1;
            count++;
        }
    }
    if(count%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

