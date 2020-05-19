#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS
    int n,sum;
    cin>>n>>sum;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
    }
    vector<int> v(a,a+n);
    sort(a,a+n);

    int i=0,j=n-1;
    bool track = false;
    while(i<j){
        if(a[i]+a[j]==sum)
        {track = true; break;}
        else if(a[i]+a[j] > sum)
            j--;
        else
            ++i;
    }
    int count=0;
    if(!track)
        cout<<"IMPOSSIBLE"<<endl;
    else {
        int x ;
        for (int k = 0; k < n; ++k) {
            if (v[k] == a[i] ) {
                x = k;
                cout << k + 1 << " ";
                break;
            }
        }
        for (int l = 0; l < n ; ++l) {
            if (v[l] == a[j] && (l>x || l<x)) {
                cout << l + 1 << " ";
                break;
            }
        }
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
