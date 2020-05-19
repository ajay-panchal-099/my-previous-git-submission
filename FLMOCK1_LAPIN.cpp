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
      string s;
      cin>>s;
      int h1[26]{0};int h2[26]{0};
      int l = s.length();
      string s1,s2;
      s1 = s.substr(0,l/2);
      if(l%2==0)
      s2 = s.substr(l/2,l);
      else
          s2 = s.substr(l/2+1,l);
    for(int i=0; i<s1.length();++i){
        h1[s1[i]-'a']+=1;
        h2[s2[i]-'a']+=1;
    }
    int flag=1;
    for(int i=0; i<26;i++){
        if(h1[i]!=h2[i]){
            flag=0;
            break;
        }
    }
    if(flag)  cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   }


    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
