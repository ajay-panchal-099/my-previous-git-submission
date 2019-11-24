 
// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
//#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int main() {
      IOS
     int n;
      cin>>n;
      vector<int>v(n);
    for (int i = 0; i <n ; ++i) {
        cin>>v[i];
    }
    int l= v.size(),p=INFINITY;
    while(l>0){
       int p = *min_element(v.begin(),v.end());
        int x= count(v.begin(),v.end(),0);
        cout<<l-x<<endl;
        for (int i = 0; i <l ; ++i) {
            v[i]-=p;
        }

        v.erase(remove(v.begin(),v.end(),0),v.end());
        l=v.size();
    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
