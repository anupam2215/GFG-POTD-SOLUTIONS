//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int W, int wt[] , int val[] , int n , vector<vector<int>>&dp){
        if(n==0||W==0) return 0;
        
        if(dp[n][W]!=-1) return dp[n][W];
        
        if(wt[n-1] <= W){
           return dp[n][W] =  max((val[n-1] + solve(W-wt[n-1],wt,val,n,dp)),solve(W,wt,val,n-1,dp));
       }
       
       else if(wt[n-1]>W){
           return dp[n][W] = solve(W,wt,val,n-1,dp);
       }
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N+1 ,vector<int>(W+1,-1));
        return solve(W,wt,val,N,dp);
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends