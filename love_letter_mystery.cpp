 
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
      int n,a,b;
      cin>>n;
   while(n--){
       string str;
       cin>>str;
       int count =0;
       int i=0;
       int j= str.length()-1;
       while(i<j){
           count+= abs(str[j]-str[i]);
           i++;
           j--;
       }
       cout<<count<<endl;
   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
