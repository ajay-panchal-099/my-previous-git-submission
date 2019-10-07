 
// Made By :- Ajay Kumar
// Date :- 07/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
    IOS
    int n;cin>>n;
    int c=0,x=0;
    int a,b,min=MOD,mini=0;
    for (int i = 0; i <n ; ++i) {
        cin>>a>>b;
        if(a!=b)
            c++;
         else {
            mini = a;
            if (mini <=min)
                min=a;
            else
                x++;
        }

    }
    if(c>0)
        cout<<"rated";
    else if(x>0)
        cout<<"unrated";
    else
        cout<<"maybe";
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

