 
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

      string alpha[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

      int n,k;
      cin>>n>>k;
  int l=n;
    while(l>0){
        for (int j = 0; j <k && j<l ; ++j) {
            cout<<alpha[j];
        }
        l-=k;
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

