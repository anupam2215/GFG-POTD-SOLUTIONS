//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    bool know(vector<vector<int> >& M, int a , int b,int n){
        if(M[a][b]==1) return true;
        else return false;
    }
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        
        //step 1- pushed all element in stack
        stack<int> s;
        for(int i=0;i<n;i++){
            s.push(i);
        }
        //step2-
        
        while(s.size()>1){
            int  a=s.top();
            s.pop();
            
            int b=s.top();
            s.pop();
            
            if(know(M,a,b,n)){
                s.push(b);
            }else{
                s.push(a);
            }
        }
        int candidate = s.top();
        //step 3- single ele in the stack is potenial celebrity
        //so verify it
        
      
        int zero_count=0;
        
        for(int i=0 ; i<n;i++){
            if(M[candidate][i]==0) zero_count++;
        }
        
        if(zero_count!=n){
            return -1;
        }
        
        //column check
        
     
        int colcount=0;
        
        for(int i=0 ;i <n ;i++){
            if(M[i][candidate]==1) colcount++;
        }
        
        if(colcount!=n-1){
            return -1;
        }
        
        return candidate;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends