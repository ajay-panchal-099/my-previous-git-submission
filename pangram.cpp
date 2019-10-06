 
// Made By :- Ajay Kumar
// Date :- 06/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
     int n;
      cin>>n;
      string str;
      cin>>str;
      int hash[26]{0};

      transform(str.begin(),str.end(),str.begin(), ::tolower);

    for (int i = 0; i < n; ++i) {
        hash[str[i]-97]+=1;
    }
   int flag=0;
    for (int j = 0; j < 26; ++j) {
        if(hash[j]==0)
        {
            cout<<"NO";
            flag=1;
            break;
        }
    }
    if(!flag)
        cout<<"YES";
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

