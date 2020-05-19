#include<bits/stdc++.h>
#define int unsigned long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int N = 10000;
int lp[N+1];
int32_t main(){
    IOS
    vector<int> pr;
    for (int i=2; i<=N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }

    int q;
    int n;
    cin>>q;

    while (q--){
        cin>>n;
        int pro =1;int ct=0;
        for(int i =0; i< pr.size(); i++){
          if(pro > n)
              break;
          else{
              pro*=pr[i];
              ct++;
          }
        }
        cout<<ct-1<<endl;
    }
    return 0;
}
