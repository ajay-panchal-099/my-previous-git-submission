 
// Made By :- Ajay Kumar
// Date :- 08/10/2019
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
   if(n==0)
       cout<<1<<endl;
   else{
       int r=n%4;
       if(r==0)
           cout<<6<<endl;
       else if(r==1)
           cout<<8<<endl;
       else if(r==2)
           cout<<4<<endl;
       else if(r==3)
           cout<<2<<endl;
   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

