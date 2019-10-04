 
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
    int a[4];
    for (int i = 0; i <4 ; ++i) {
        cin>>a[i];
    }
    string str;
    cin>>str;
    int sum=0;
    for (int j = 0; j <str.length() ; ++j) {
        sum+=a[str[j]-49];
    }
    cout<<sum;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

