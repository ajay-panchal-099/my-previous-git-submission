 
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
      int t,b,c,d,flag=0;
      cin>>t;
     int a[t];
    for (int i = 0; i < t; ++i) {
        cin>>a[i];
    }
    sort(a,a+t,greater<int>());
    for (int i = 0; i < t-2; ++i) {
       b=a[i];
       c=a[i+1];
       d=a[i+2];

       if(d+b > c && b+c >d && c+d >b){
           cout<<a[i+2]<<" "<<a[i+1]<<" "<<a[i];
           flag=1;
           break;
       }
    }
    if(flag==0){
        cout<<"-1";
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
