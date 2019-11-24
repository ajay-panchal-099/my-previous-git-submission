 
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
     int d1,d2,m1,m2,y1,y2;
      cin>>d1>>m1>>y1;
      cin>>d2>>m2>>y2;
      int flag=0;
      if(y1>y2){
          cout<<10000<<endl;
          flag=1;
      }
      else if(y1<y2)
      {
          cout<<0<<endl;
          flag=1;
      }
       int x=0;
       if(flag==0){
         if(m1>m2 ){
             cout<<500*(m1-m2)<<endl;
             x=1;
         }
         else if(m1<m2)
         {
             cout<<0<<endl;
             x=1;}
         }
      if(x==0 && flag==0){
          if(d1>d2){
              cout<<(d1-d2)*15<<endl;
          }
          else
              cout<<0<<endl;
      }



}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
