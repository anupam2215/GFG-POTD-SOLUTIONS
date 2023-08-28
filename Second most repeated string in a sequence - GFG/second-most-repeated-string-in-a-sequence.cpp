//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        
        unordered_map<string, int> mx;
        for(int i=0 ; i<n ; i++){
            mx[arr[i]]++;
        }
        
         int maxy=0;
         
         for(auto x : mx){
          maxy = max(x.second , maxy);
         }
         int smx=0;
         
         string ans= "";
         for(auto it:mx){
             if(it.second >smx && it.second<maxy){
                 ans=it.first;
                 smx=max(smx,it.second);
             }
         }
         
         return ans;
    }   
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends