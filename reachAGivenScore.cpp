#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int count(int n){
    int table[n + 1], i;
    for(int j = 0; j < n + 1; j++)
        table[j] = 0;
    table[0] = 1;

    for (i = 3; i <= n; i++)
        table[i] += table[i - 3];

    for (i = 5; i <= n; i++)
        table[i] += table[i - 5];

    for (i = 10; i <= n; i++)
        table[i] += table[i - 10];

    return table[n];
}
int32_t main(){
   IOS
   int t;
   cin>>t;
   while (t--){
       int n;
       cin>>n;
      int w = count(n);
      cout<<w<<endl;
   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
