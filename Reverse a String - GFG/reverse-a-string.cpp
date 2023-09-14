//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
int i=0;
class Solution
{
    public:
    string reverseWord(string s)
    {
        // Your code goes here
        
        int n=s.size();
       for(int i=0,j=n-1;i<j;i++,j--)
            swap(s[i],s[j]);
        
        
        return s;
        
        
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends