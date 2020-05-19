#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
   IOS
   int n,k;
   cin>>n>>k;

   int a[n];
   int room=0;
   int sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    sort(a,a+n);
    int i=0;
    int j = n-1;
    while(i<=j){
        if(a[i]+a[j]<=k)
        { room++; i++;--j;}
        else if (a[j]> a[i]){
            room++;
            j--;
        } else {++i;room++;}

    }
   cout<<room<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
