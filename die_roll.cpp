 
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

    int a,b,max=0;
    string x[6]={"1/6","1/3","1/2","2/3","5/6","1/1"};
    cin>>a;
    max=a;
    cin>>b;
    if(b>a)
        max=b;
    cout<<x[6-max];
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

