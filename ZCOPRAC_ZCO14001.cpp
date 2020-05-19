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
     int h; cin>>h;
     int s[n];
    for (int i = 0; i < n; ++i) {
        cin>>s[i];
    }
     int x;
    int j=0;
    int b=0;
     while(true){
         cin>>x;
         if(x==0)
             break;
         if(x==1){
             if(j>0)
                 j--;
             else j=0;
         }
         else if(x==2){
             if(j<n-1)
                 j++;
             else j=n-1;
         }
         else if(x==3){
             if(s[j]>0 && b==0)
             {s[j]--;b=1;}
         }
         else if(x==4){
             if(s[j]==h)
                 continue;
             if(s[j] < h && b>0)
             {s[j]++; b=0;}
         }

     }
    for (int k = 0; k < n; ++k) {
        cout<<s[k]<<" ";
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
