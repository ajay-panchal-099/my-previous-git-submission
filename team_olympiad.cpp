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

     int n;
      cin>>n;
      int a[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i];
    }
     int x=0,y=0,z=0;
    int t1[5000],t2[5000],t3[5000];
    for (int j = 0; j < n; ++j) {
        if(a[j]==1){
            t1[x]=j+1;
            x++;
        }
        else if(a[j]==2){
            t2[y]=j+1;
            y++;
        }
        else{
            t3[z]=j+1;
            z++;
        }
    }
    int team=min(x,min(y,z));
    cout<<team<<endl;
    for (int k = 0; k <team ; ++k) {
        cout<<t1[k]<<" "<<t2[k]<<" "<<t3[k]<<endl;
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

 
