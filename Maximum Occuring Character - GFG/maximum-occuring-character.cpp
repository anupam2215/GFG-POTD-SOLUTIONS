//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> m;
        for(int i=0;i<str.length();i++){
            m[str[i]]++;
        }
        
        int maxi=0;
        int ans;
        for(auto x: m){
            if(x.second>maxi){
                ans=x.first;
                maxi=x.second;
                
            }
           
        }
         return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends