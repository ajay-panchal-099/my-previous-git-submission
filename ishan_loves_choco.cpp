#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
   IOS
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        deque<int>q;
        for(int i=0;i<n;++i){
            int x; cin>>x;
            q.push_back(x);
        }
      while(q.size()>1){

          int f = q.front();
          int b = q.back();
          if(f>b)
              q.pop_front();
          else
              q.pop_back();
      }

      cout<<q.front()<<endl;
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
