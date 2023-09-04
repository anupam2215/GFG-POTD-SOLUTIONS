//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){
    // code here
        int count =0;
        string result="";
        
        char letter =s[0];
        for(int i=0;i<s.length();i++){
            if(s[i]==letter) count++;
            
            else{
                result+=letter+to_string(count);
                count=1;
                letter=s[i];
            }
        }
        result+=letter+to_string(count);
        reverse(result.begin() , result.end());
        return result;
    
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends