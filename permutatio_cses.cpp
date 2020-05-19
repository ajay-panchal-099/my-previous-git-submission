#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS
    int n;
    cin>>n;

    if(n<4){
        if(n==1)
            cout<<n<<endl;
        else
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        vector<int>even,odd;
        for (int i = 1; i <=n ; ++i) {
            if(i%2==0)
                even.push_back(i);
            else
                odd.push_back(i);
        }

        for(int a:even)
            cout<<a<<" ";
        for( int b: odd)
            cout<<b<<" ";
    }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
