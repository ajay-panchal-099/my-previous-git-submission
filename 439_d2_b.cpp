 
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
      vector<int>v(n);
      for(auto &x:v)
          cin>>x;

       sort(v.begin(),v.end());
       int sum=0;
    for (int i = 0; i < n; ++i) {
        if(k==1)
        {
            sum+=v[i]*k;
        }
        else{
            sum+=v[i]*k;
            k--;
        }
    }
     cout<<sum<<endl;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
