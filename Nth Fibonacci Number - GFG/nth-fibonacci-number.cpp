//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int fib(int n , vector<int> &dp){
      if(n<=1) return n;
      
      //step 3
      if(dp[n]!=-1) return dp[n];
      
      //step 2
      dp[n] = (fib(n-1,dp)+fib(n-2,dp))% 1000000007;
      return dp[n];
  }
    int nthFibonacci(int n){
        // code here
        //step1
        vector<int>dp(n+1);
        for(int i=0; i<=n ;i++){
            dp[i]=-1;
        }
        
       int ans =  fib(n,dp);
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends