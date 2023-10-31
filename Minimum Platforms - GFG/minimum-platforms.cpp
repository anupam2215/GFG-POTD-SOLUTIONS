//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int, int> > temp(n);
    	
    	for (int i = 0; i < n; i++) {
    	    temp[i] = {arr[i], dep[i]};
    	}
        sort(temp.begin(), temp.end());
        
        priority_queue<int, vector<int>, greater<int> > pq;
            int count = 1;
            pq.push(temp[0].second);
        
        for (int i = 1; i < n; i++) {
 
        if (pq.top() >= temp[i].first) {
            count++;
        }
        else {
            pq.pop();
        }
        pq.push(temp[i].second);
    }
         return count;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends