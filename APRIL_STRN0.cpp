// @author - ajay panchal
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
const int MOD = 1e9 + 7 ;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int32_t main(){
    IOS

    int t; cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(k==1){
            if(x>=2)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
        else if(k==2){
            int lb = pow(2,k);
            if(x >=lb  && !prime(x)){
                cout<<1<<endl;
            } else
                cout<<0<<endl;
        }
        else{
            int llb = pow(2,k);
            if(x >= llb){
               int count=0;
                  while (x%2 == 0)
                  {
                      x /= 2;
                      count++;
                  }

                for (int i=3; i*i<=x; i=i+2)
                {
                        while (x%i == 0)
                        {  count++;
                            x = x/i;
                        }
                }
                if(x>2)
                    count++;

                if(count<k)
                    cout<<0<<endl;
                else
                    cout<<1<<endl;

            }
            else{
                cout<<0<<endl;
            }

        }


    }
    return 0;
}
// CHECK FOR CORNER CASES LIKE 0,1 etc.
// READ
// THINK
// CODE
// DEBUG
// AC
