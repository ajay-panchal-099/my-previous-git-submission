#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
#define vi vector<int>
#define pr pair<int,int>
#define endl "\n"
#define all(c) (c).begin(), (c).end()
const int MOD = 1e9 + 7 ;
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


int numfactors(int n){
    int res = 1;
    map<int,int> m;
    for(int x=2; x*x <=n; x++){
       // int cr=0;
        while(n%x==0){
       //     cr+=1;
            m[x]++;
            n/=x;
        }
      //   res *= cr+1;
    }
   // if(n>1) res *= 2;
    if(n>1) m[n]++;
    int rr=1;
    for (auto it = m.begin(); it!= m.end();it++) {
        rr *= (it->second)+1;
    }
    return rr;
    //return res;
}
int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
    int t;
    cin>>t;
    int a;
    while(t--){
        cin>>a;
        int x = numfactors(a);
        cout<<x<<endl;
    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
