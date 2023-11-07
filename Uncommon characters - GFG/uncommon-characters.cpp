//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char,int> m1;
            unordered_map<char,int> m2;
            
            string ans= "";
            
            for(int i=0;i<B.size();i++){
                m1[B[i]];
            }
            
            for(int i=0;i<A.size();i++){
                m2[A[i]];
            }
            
            for(int i=0;i<A.size();i++){
                if(m1.find(A[i])==m1.end())
                    ans=ans+A[i];
                    m1.erase(m1[A[i]]);
            }
            
            for(int i=0;i<B.size();i++){
                if(m2.find(B[i])==m2.end())
                    ans=ans+B[i];
                    m2.erase(m2[B[i]]);
            }
            
            if(ans.empty()) return "-1";
            
            sort(ans.begin(),ans.end());
            return ans;
            
            
            
        }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends