#include<bits/stdc++.h>
#define int unsigned long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int ways(int n){
 int dice[n+6];
    dice[0]=0;
    dice[1]=1;
    dice[2]=2;
    dice[3]=4;
    dice[4]=8;
    dice[5]=16;
    dice[6]=32;

    for (int i = 7; i <=n ; ++i) {
            dice[i]= (dice[i-1]+dice[i-2]+dice[i-3]+dice[i-4]+dice[i-5]+dice[i-6])%MOD;
    }
   // cout<<dice[n]<<endl;
 return dice[n]%MOD;

}
int32_t main(){
   IOS
   int n;
   cin>>n;
   int w = ways(n);
   cout<<w<<endl;


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
