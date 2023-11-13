//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	     int n = nums.size();

        
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = {nums[i], i};
        }

        
        sort(arr.begin(), arr.end());

        // Create a hash map to store the mapping of original indices to their sorted positions
        unordered_map<int, int> indexMap;
        for (int i = 0; i < n; ++i) {
            indexMap[arr[i].second] = i;
        }

        // Initialize the visited array
        vector<bool> visited(n, false);

        int swaps = 0;

        // Traverse the array and count cycles
        for (int i = 0; i < n; ++i) {
            if (visited[i] || indexMap[i] == i) {
                continue;  // Skip already visited nodes and nodes already in their sorted positions
            }

            int cycleSize = 0;
            int j = i;

            while (!visited[j]) {
                visited[j] = true;
                j = indexMap[j];
                cycleSize++;
            }

            swaps += (cycleSize - 1);
        }

        return swaps;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends