 
// Made By :- Ajay Kumar
// Date :- 01/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      int n;cin>>n;
      char a[n];
      int c1=0,c2=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]=='A')
            c1++;
        else
            c2++;
    }
    if(c1>c2)
        cout<<"Anton"<<endl;
    else if(c1<c2)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
