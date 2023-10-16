//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool solve(int arr[] , int sum , vector<vector<int>>&dp , int n){
        
        
        if(n==0) return false;
        if(sum==0) return true;
        
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        if(arr[n-1]<=sum){
            return dp[n][sum] = solve(arr,sum-arr[n-1],dp,n-1) or solve(arr,sum,dp,n-1);
        }
        else{
            return dp[n][sum]=solve(arr,sum,dp,n-1);
        }
        
        
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0 ; i<N ; i++){
            sum+=arr[i];
        }
        
        if(sum%2!=0) return false;
        
        int s=sum/2;
        vector<vector<int>> dp(N + 1, vector<int>(sum + 1, -1));
        
        return solve(arr,s,dp,N);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends