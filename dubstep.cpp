 
// Made By :- Ajay Kumar
// Date :- 08/10/2019
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7;
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
int32_t main() {
    IOS
    string str;
    cin>>str;
    string toErase="WUB";
    /*
  * Erase all Occurrences of given substring from main string.
  */
        size_t pos = std::string::npos;

// Search for the substring in string in a loop untill nothing is found
        while ((pos  = str.find(toErase) )!= std::string::npos)
        {
       // If found then erase it from string
            str.erase(pos, toErase.length());
            if(str[pos-1]!=' ')
            str.insert(pos," ");
        }

    cout<<str;
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.

