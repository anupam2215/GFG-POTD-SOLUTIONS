//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    sort(arr,arr+N);
	    reverse(arr,arr+N);
	    
	    vector<int> v;
	    int i=0;
	    int j = N-1;
	    
	    while(i<j){
	        v.push_back(arr[i]);
	        v.push_back(arr[j]);
	        i++;
	        j--;
	    }
	    if(N%2!=0) v.push_back(arr[i]);
	    
	    return v;
	}

};
	

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends