#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int binomialCoeff(int n, int k)
{
    int C[k+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;  // nC0 is 1

    for (int i = 1; i <= n; i++)
    {
        // Compute next row of pascal triangle using
        // the previous row
        for (int j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
}
int32_t main(){
   IOS
   int t;
   cin>>t;

   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
       for (int i = 0; i < n; ++i) {
           if(s[i]=='1')
               count++;
       }
       cout<<binomialCoeff(count,2)+count<<endl;
   }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
