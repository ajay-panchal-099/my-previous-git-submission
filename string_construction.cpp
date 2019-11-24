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
      cin>>t;
      while(t--){
          string str;
          cin>>str;
          set<char>s;
          for (int i = 0; i <str.length() ; ++i) {
              s.insert(str[i]);
          }

          cout<< s.size()<<endl;

      }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
