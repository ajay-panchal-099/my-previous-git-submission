 
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

      string str;
      cin>>str;
      int count=0;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i]=='C'){
            count++;
            int j=i+1; int x=0;
            while(str[j]=='C' && j<str.length() && x< 4){
                i++;
                j++;x++;
            }
        }
        else {
            count++;
            int j=i+1; int x=0;
            while(str[j]=='P' && j<str.length() && x< 4){
                i++;j++;x++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
