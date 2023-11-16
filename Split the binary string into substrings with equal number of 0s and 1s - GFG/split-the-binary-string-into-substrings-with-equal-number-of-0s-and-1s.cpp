//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int c0=0;
        int c1=0;
        int count=0;
        int n=str.length();
        
        for(int i=0;i<n;i++){
            if(str[i]=='0') c0++;
            else c1++;
            
            if(c0==c1)count++;
        }
        if(c0!=c1) return -1;
        return count;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends