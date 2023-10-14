//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
  int solve(vector<int>&cost ,int N , vector<int>& dp){
      if(N==0) return cost[0];
      if(N==1) return cost[1];
       
      //step 3
      if(dp[N]!= -1) return dp[N];
      
      //step 2 storing the value
      dp[N] = cost[N] + min(solve(cost , N-1 , dp) , solve(cost , N-2 , dp));
      return dp[N];
      
  }
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        //step1
        vector<int> dp(N+1,-1);
        int ans = min(solve(cost , N-1 , dp) , solve(cost , N-2 , dp));
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends