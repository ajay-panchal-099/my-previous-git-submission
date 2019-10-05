 
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
      int n;
      cin>>n;
      while(n--){
          string str;
          cin>>str;
          if(str.length()<=10)
              cout<<str<<endl;
          else
              cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
      }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

