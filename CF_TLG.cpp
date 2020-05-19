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
     int n; cin>>n;
     int p1=0,p2=0,best=0, diff,w=1;
   int a[n],b[n];
    for (int i = 0; i <n ; ++i) {
        cin>>a[i]>>b[i];
    }
    for (int j = 0; j < n; ++j) {
        p1+=a[j]; p2+=b[j];
      //  cout<<p1<<" "<<p2<<endl;
        if(p1>p2) {
            diff = p1 - p2;
            if (diff > best) {
                best = diff;
                w = 1;
            }
        }
        else{
                diff = p2 - p1;
                if(diff > best){
                    best = diff;
                    w=2;
                }
            }
        }
    cout<<w<<" "<<best<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
