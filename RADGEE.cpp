// @author - ajay panchal
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
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS
    //freopen("addin.txt","r",stdin);
    //freopen("addout.txt","w",stdout);
     int t; cin>>t;
     while(t--){
        int n,m; cin>>n>>m;
        deque<int>a,b,q;
         for (int i = 0; i < n; ++i) {
             int x; cin>>x;
             a.push_back(x);
         }
         for (int j = 0; j < n; ++j) {
             int x; cin>>x;
             b.push_back(x);
         }
         for (int k = 0; k < m; ++k) {
             int x; cin>>x;
             q.push_back(x);
         }
         int r=0,g=0;
         while(!a.empty()){
             int w=0;
             int  u = a.front();
             int  v = b.front();
             if(u > v){
                 r++;w=1;
             }
             else{
                 g++;w=2;
             }

             a.pop_front();
             b.pop_front();
             if(q.size()>0){
                 if(w==1){
                     a.push_back(q.front());
                     q.pop_front();
                     b.push_back(q.front());
                     q.pop_front();
                 }
                 else{
                     b.push_back(q.front());
                     q.pop_front();
                     a.push_back(q.front());
                     q.pop_front();
                 }
             }
         }
         if(r>g)
             cout<<"Radhesh wins"<<endl;
         else if(g>r)
             cout<<"Geethakoomaree wins"<<endl;
         else cout<<"Tie"<<endl;
     }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
