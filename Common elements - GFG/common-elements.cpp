//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int,int> m;
            for(int i=0;i<n1;i++)
            {
                if(m.find(A[i])==m.end())
                {  
                    m[A[i]]=1;
                }
                
            }
            for(int i=0;i<n2;i++)
            {
                if(m.find(B[i])!=m.end())
                {
                    if(m[B[i]]==1)
                      m[B[i]]=2;
                }
            }
            for(int i=0;i<n3;i++)
            {
                if(m.find(C[i])!=m.end())
                {  
                    if(m[C[i]]==2)
                       m[C[i]]=3;
                }
            }
            vector<int> a;
            for(auto i=m.begin();i!=m.end();i++)
            {
                if(i->second == 3)
                   a.push_back(i->first);
            }
            sort(a.begin(),a.end());
            return a;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends