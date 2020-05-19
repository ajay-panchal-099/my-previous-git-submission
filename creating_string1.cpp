// C++ program to print all
// permutations without  duplicates allowed
#include <bits/stdc++.h>
using namespace std;


// Function to print permutations of string
// This function takes three parameters:
// 1. String
// 2. Starting index of the string
// 3. Ending index of the string.
set<string> s;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
    {s.insert(a);}
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l+1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

// Driver Code
int main()
{
    string str;
    cin>>str;
    int n = str.size();
    permute(str, 0, n-1);
    set<string>:: iterator it;
    cout<<s.size()<<endl;
    for(it= s.begin(); it!= s.end(); ++it ){
        cout<<*it<<endl;
    }
    return 0;
}

// This is code is contributed by rathbhupendra
