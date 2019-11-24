 
// Made By :- Ajay Kumar
// Date :- 18/10/2019
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
      int i=0;
      int l=str.length();
      while(i<l){
          if((str[i]=='1' && str[i+1]=='0') || (str[i]=='0' && str[i+1]=='1')){
              str.erase(str.begin()+i);
              str.erase(str.begin()+i);
              i--;
          }
          else
              i++;
          l=str.length();
      }
      cout<<str.length();
   return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
