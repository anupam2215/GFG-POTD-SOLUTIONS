//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        
        unordered_map<char,int>mp;
        int start=-1;
        int maxLen=0;
        
        for(int i=0;i<S.length();i++){
            if(mp.find(S[i])!=mp.end()){
                start=max(start,mp[S[i]]);
            }
            
            mp[S[i]]=i;
            maxLen=max(maxLen,i-start);
        }
        return maxLen;
        
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
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends