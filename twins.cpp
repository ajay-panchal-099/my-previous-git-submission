 
// Made By :- Ajay Kumar
// Date :- 06/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
     int n;cin>>n;
     int a[n];
     int sum=0;
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        sum+=a[i];
    }
    int equal=sum/2;

    int count=1;
    sort(a,a+n);
    int divide=a[n-1]; int x=n-2;
    while(divide <= equal){
        divide+=a[x];
        x--;
        count++;
    }
    cout<<count;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

