 
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
      int l=0,u=0;
    for (int i = 0; i < str.length() ; ++i) {
      if( str[i]>=65 && str[i]<91)
          u++;
      else
          l++;
    }
    if(u>l)
        transform(str.begin(),str.end(),str.begin(), ::toupper);
    else
        transform(str.begin(),str.end(),str.begin(), ::tolower);

    cout<<str;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

