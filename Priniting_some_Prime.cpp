#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int N = 100000000;
int lp[N+1];
int32_t main(){
   IOS

    // print prime 1st,101th, 201th....and so on.
    vector<int> pr;
     int k = 0, x = 1;
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
            k++;
            if(x==k){
                cout<<i<<endl;
                x+=100;
            }
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
    return 0;
}
