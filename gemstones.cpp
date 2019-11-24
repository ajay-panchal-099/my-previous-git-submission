#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

void commonCharacters(string str[], int n)
{

    bool prim[MAX_CHAR];
    memset(prim, true, sizeof(prim));

       for (int i = 0; i < n; i++) {

           bool sec[MAX_CHAR] = { false };

           for (int j = 0; str[i][j]; j++) {

              if (prim[str[i][j] - 'a'])
                sec[str[i][j] - 'a'] = true;
        }

           memcpy(prim, sec, MAX_CHAR);
    }
        int count=0;
        for (int i = 0; i < 26; i++)
        if (prim[i])
            count++;

        cout<<count;
}

int main()
{
    int n;cin>>n;
    string str[n];
    for (int i = 0; i < n; ++i) {
        cin>>str[i];
    }
    commonCharacters(str, n);
    return 0;
}
 
