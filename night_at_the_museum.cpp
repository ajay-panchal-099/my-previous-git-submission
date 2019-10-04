 
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
     int sum=0,x=0,y=0;
    char ppp='a';
    for (int i = 0; i < str.length(); ++i) {
        x = abs(str[i]-ppp);
        y = 26 - x;
        if(x<y){
            sum+=x;
        } else
            sum+=y;
        ppp=str[i];
    }

  cout<<sum;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

