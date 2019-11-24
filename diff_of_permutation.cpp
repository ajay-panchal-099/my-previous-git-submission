 
// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
//#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int main() {
      IOS
     int t;
      cin>>t;
      while(t--){
          int n;
          cin>>n;
          vector<int>v;
          for (int i = 1; i <=n; ++i) {
              v.push_back(i);
          }
          int count=0;
          do{
              for (int i = 0; i < n; ++i) {
                  count+=n-v[i];

              }
          }while(next_permutation(v.begin(),v.end()));
          cout<<count<<endl;
      }




    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
