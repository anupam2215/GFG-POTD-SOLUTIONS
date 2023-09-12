//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define ll long long int

class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here4
        if(N==1) return 0;
        
        ll  sum=1;
        for(int i=2 ;i<=sqrt(N); i++){
            if(N%i==0) {
                sum=sum+i;
                if((N/i)!=i)
                    sum+=(N/i);
                    
                // continue;
            }
        }
        return sum==N;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends