/* 
 * We can easily observe that the number of 2s 
 * in prime factors is always more than or equal 
 * to the number of 5s. So if we count 5s in 
 * prime factors, we are done. How to count 
 * total number of 5s in prime factors of n!? 
 * A simple way is to calculate floor(n/5).
 * For example, 7! has one 5, 10! has two 5s. 
 * It is done yet, there is one more thing to 
 * consider. Numbers like 25, 125, etc have more 
 * than one 5. For example if we consider 28!, 
 * we get one extra 5 and number of 0s become 6. 
 * Handling this is simple, first divide n by 5 
 * and remove all single 5s, then divide by 25 to
 * remove extra 5s and so on. Following is the 
 * summarized formula for counting trailing 0s.
 * */


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
   int count=0;

    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    cout<<count<<endl;

    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
