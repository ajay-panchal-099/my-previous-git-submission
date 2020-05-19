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

   if(n*(n+1)%4==0) {
       vector<int> set1, set2;
       if (n % 4 == 0) {
           int j = 1;
           while (j < n) {
               set1.push_back(j++);
               set1.push_back(n--);
               set2.push_back(j++);
               set2.push_back(n--);
           }
       }
      else{
          int i =4;
          set1.push_back(1);
          set1.push_back(2);
          set2.push_back(3);
           while (i < n) {
               set1.push_back(i++);
               set1.push_back(n--);
               set2.push_back(i++);
               set2.push_back(n--);
           }
      }
      cout<<"YES"<<endl;
      cout<<set1.size()<<endl;
      for( int a: set1)
          cout<<a<<" ";
      cout<<endl;
      cout<<set2.size()<<endl;
      for(int b : set2)
          cout<<b<<" ";

   }
   else
       cout<<"NO"<<endl;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
