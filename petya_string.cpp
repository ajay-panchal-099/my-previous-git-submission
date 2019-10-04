 
// Made By :- Ajay Kumar
// Date :- 04/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
      IOS
      string str1,str2;
      cin>>str1>>str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    int sum=0,flag=0;
       for (int i =0; i<str1.length(); ++i) {
        sum+=str1[i]-'0'-49;
        sum-=str2[i]-'0'-49;
        if(sum>0)
        {cout<<1<<endl;flag=1;
            break;
        }
        else if(sum<0)
        {cout<<-1<<endl;
         flag=1;
         break;}
    }

    if(!flag)
        cout<<0<<endl;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

// transform()begin,end,cmp;
