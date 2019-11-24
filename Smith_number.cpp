// Made By :- Ajay Kumar
// Date :-
#include<bits/stdc++.h>
#define int  unsigned long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
int  Prime ( int n){
    int sum=0;

   // vector<int> v;
    while (n%2==0 ){
     //   v.push_back(2);
        sum+=2;
        n/=2;
    }
    for (int i = 3; i <sqrt(n) ; i+=2) {
        while(n%i==0){
       //     v.push_back(i);
            //sum+=i;
            int d=i;
            while(d>0){
                sum+=d%10;
                d/=10;
            }
            n/=i;
        }
    }
    //if(n>2)
      //  v.push_back(n);
   if(n>2){
       while(n>0){
           sum+=n%10;
           n/=10;
       }
   }
    ///for(auto &a :v) cout<<a<<" ";
//   cout<<sum<<endl;
  return sum;
}
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      int n;
      cin>>n;
      int p=n;
      int r=0;
     while(n>0){
        r+=n%10;
        n/=10;
      }
       if ( r ==Prime(p)){
           cout<<1<<endl;
       } else cout<<0<<endl;

      return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
