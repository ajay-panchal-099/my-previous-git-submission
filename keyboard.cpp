 
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

      string str="qwertyuiopasdfghjkl;zxcvbnm,./";

      char ch;
      cin>>ch;
      string s;
      cin>>s;
    string:: iterator pos;

    for (int i = 0; i <s.length() ; ++i) {
        pos=find(str.begin(),str.end(),s[i]);
        if(ch=='R')
            cout<<str[pos-str.begin()-1];
        else
            cout<<str[pos-str.begin()+1];
    }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

