//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
   bool isValid(string temp){
        if((temp[0]=='a' or temp[0]=='e' or temp[0]=='i' or temp[0]=='o' or temp[0]=='u' ) && (temp[temp.size()-1]!='a' && temp[temp.size()-1]!='e' && temp[temp.size()-1]!='i' && temp[temp.size()-1]!='o' && temp[temp.size()-1]!='u' )){
            
            return true;
        }
        return false;
    }
    
    void solve(string str,set<string> &ans,string temp,int index){
        if(index==str.length()){
            if(isValid(temp)) ans.insert(temp);
            return ;
        }
        
        temp.push_back(str[index]);
        solve(str , ans , temp , index+1);
        temp.pop_back();
        solve(str , ans , temp , index+1);
    }
  public:
    set<string> allPossibleSubsequences(string S) {
        // code here
       set<string> ans;
       
       string ss;
       
       solve(S,ans,ss,0);
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        set<string> ans = ob.allPossibleSubsequences(S);
        if (ans.size() == 0)
            cout << -1 << endl;
        else {
            for (auto i : ans) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends