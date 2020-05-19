#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void build(int a[], int v, int tl, int tr,vector<int>& t) {
    if (tl == tr) {
        t[v] = a[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(a, v*2, tl, tm,t);
        build(a, v*2+1, tm+1, tr,t);
        t[v] = t[v*2] + t[v*2+1];
    }
}
void update(int v, int tl, int tr, int pos, int new_val,vector<int>& t) {
    if (tl == tr) {
        t[v] = new_val;
    } else {
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            update(v*2, tl, tm, pos, new_val,t);
        else
            update(v*2+1, tm+1, tr, pos, new_val,t);
        t[v] = t[v*2] + t[v*2+1];
    }
}
int sum(int v, int tl, int tr, int l, int r,vector<int> t) {
    if (l > r)
        return 0;
    if (l == tl && r == tr) {
        return t[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v*2, tl, tm, l, min(r, tm),t)
           + sum(v*2+1, tm+1, tr, max(l, tm+1), r,t);
}
int32_t main(){
     IOS
     int n; cin>>n;
     int q; cin>>q;
     int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<int>t(4*n);
    build(a, 1, 0,n-1,t);
    /*for (int j = 0; j <t.size()-1; ++j) {
        cout<<t[j]<<endl;
    }*/
    for (int j = 0; j < q; ++j) {
        int x,l,r;
        cin>>x>>l>>r;
        if(x==1){
            update(1,0,n-1,l-1,r,t);
        }
        else{
            int xsum= sum(1,0,n-1,l-1,r-1,t);
            cout<<xsum<<endl;
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
