//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int countRev (string s)
{
    // your code here
    int len = s.length();

    // If the length of the string is odd, it can't be balanced
    if (len % 2 != 0)
        return -1;

    int open = 0, close = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == '{') {
            open++;
        } else {
            // If there's an unmatched '}', increment close
            // If open is zero, it means we have an unmatched '}'
            if (open == 0) {
                close++;
            } else {
                open--;
            }
        }
    }

    // Number of reversals needed
    return (open + 1) / 2 + (close + 1) / 2;
}