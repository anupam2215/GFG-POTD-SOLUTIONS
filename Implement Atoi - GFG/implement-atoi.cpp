//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans = 0 ;
        for(int i=0; i<str.size(); i++) {
            if((i==0) && (str[i]=='-')) continue ;
            if((str[i]-'0')>9 || (str[i]-'0')<0) return -1 ;
            ans = 10*ans + (str[i]-'0') ;
        }
        if(str[0]=='-') return -ans ;
        return ans ;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends