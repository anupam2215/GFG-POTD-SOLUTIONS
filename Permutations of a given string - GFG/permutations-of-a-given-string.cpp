//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	void solve(string& S, set<string>& perms, int ind) {
        if (ind == S.size()) {
            perms.insert(S);
            return;
        }
        for (int i = ind; i < S.size(); i++) {
            swap(S[ind], S[i]);
            solve(S, perms, ind + 1);
            swap(S[ind], S[i]);
        }
    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		set<string> perms;
        int ind = 0;
        solve(S, perms, ind);
        
        // Convert set to vector
        vector<string> ans(perms.begin(), perms.end());
        return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends