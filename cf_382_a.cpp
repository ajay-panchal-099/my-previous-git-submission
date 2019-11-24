 
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
    int n,k;
    cin>>n>>k;
    char a[n];
    int x=0,y=0;
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
        if(a[i]=='G')
            x=i;
        if(a[i]=='T')
            y=i;
    }
    int flag=0,g=0;
    if(y<x)
        swap(x,y);
    while(x<=y){
        if((a[x+k] == 'T' || a[x+k]=='G') && (x+k)<=y)
        {    flag=1;
            cout<<"YES"<<endl;
            break;
        }
        else if(a[x+k]=='#')
        {    g=1;
            cout<<"NO"<<endl;
            break;
        }
        else{
            x+=k;
        }
    }
    if(!flag && !g) cout<<"NO"<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
