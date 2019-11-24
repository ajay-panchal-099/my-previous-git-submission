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
      int q;
      cin>>q;

      while(q--){
          int a,b;
          cin>>a>>b;
          int count=0;
          int x=ceil(sqrt(a));


          for (int i = a; i <=b ; ++i) {
              if(x*x==i){
                  count++;
                  x++;
                  i=x*x-1;
              }
          }
          cout<<count<<endl;
      }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc. 
