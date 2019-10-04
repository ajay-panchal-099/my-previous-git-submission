 
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
      int n;cin>>n;
      int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    int l=0,r=n-1,flag=-1;
    int sumS=0,sumD=0;
  while(l<r){
      if(a[l]>a[r])
      {
          sumS+=a[l];l++;
      }
      else{
          sumS+=a[r];r--;
      }
      flag=0;
     if(l<r){ if(a[l]>a[r])
      {
          sumD+=a[l];l++;
      }
      else{
          sumD+=a[r];r--;
      }
     flag=1;}
  }
  if(flag==0)
      sumD+=a[l];
  else
      sumS+=a[l];

  cout<<sumS<<" "<<sumD;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

