//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n = S.length();
        
        int start = 0;
        int maxlen = 1;
        
        if (S.empty() || S.length() <= 1) {
            return S; // Return the input string as is for empty or length <= 1
        }
        
        for(int i=1 ; i < n ; i++){
            //for even length
            int l = i-1;
            int r = i;
            
            while(l>=0 && r < n && S[l] == S[r]){
                if(r-l+1 > maxlen){
                    maxlen = r-l+1;
                    start = l;
                }
                
                l--;
                r++;
            }
            
            // for odd length
            
            l = i - 1;
            r = i + 1;
            
            while (l >= 0 && r < S.length() && S[l] == S[r]) {
                if (r - l + 1 > maxlen) {
                    maxlen = r - l + 1;
                    start = l;
                }
                l--;
                r++;
            }
        }

        return S.substr(start, maxlen);
        }
        
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends