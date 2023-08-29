//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    // Code here
   	   vector<bool> vokki(n+1,true);
   	    long long sperm = 0;
   	    // vokki[0]=vokki[1]=false;
   	    
   	    // for(int i=2 ; i*i<=n ; i++){
   	    //     if(i==0 || i==1)
   	    //         return false;
   	    //     else
   	    //         vokki[n]=true;
   	    // }
   	    
   	    for(int i=2 ;i*i<= n ;i++){
   	        if(vokki[i]==true)
   	            for(int j=i*i ; j<=n ; j+=i)
   	                vokki[j]=false;
   	    }
   	    for(int i=2 ; i<=n ; i++){
   	        if(vokki[i]){
   	            sperm+=i;
   	        }
   	    }
   	    return sperm;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends