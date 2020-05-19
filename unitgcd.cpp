// @author - ajay panchal
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector<int> prime(  int n, int lp[]){
    vector<int> pr;
    for (int i=2; i<=n; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=n; ++j)
            lp[i * pr[j]] = pr[j];
    }
    return pr;
}
int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int lp[n+1];
        memset(lp,0, sizeof(lp));
        vector<int> ans = prime(n,lp);

        if(n==1)
            cout<<1<<endl;
        else
           cout<<n/2<<endl;

         cout<<ans.size()+1<<" "<<1;
         for (int ch : ans)
             cout<<" "<<ch;
         cout<<endl;

        for (int i = 4; i <= n; ++i) {
            if(i%2==0 ){
                if(i+1 <=n && lp[i+1] != i+1){
                    cout<<2<<" "<< i;
                }
                else{
                    cout<<1<< " " << i<<endl;
                }
            }
            else{
                if(lp[i]!=i)
                    cout<<" "<<i<<endl;
            }
        }

    }

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
