 
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
      int t,x,y,ind1=0,ind2=0;
      cin>>t;
      while(t--){
          int m,n;
          cin>>m>>n;
          int a[n];
          for (int i = 0; i < n; ++i) {
              cin>>a[i];
          }
          int flag=0;
          for (int j = 0; j < n-1; ++j) {
               x= m-a[j];
               ind1=j;
              for (int i = j+1; i < n; ++i) {
                  if(x==a[i]){
                      ind2=i;
                      flag=1;
                      break;
                  }

              }if(flag)break;
          }
          cout<<ind1+1<<" "<<ind2+1<<endl;
      }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
