//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here        
     vector<long long int> leftProducts(n, 1);
        vector<long long int> rightProducts(n, 1);
        vector<long long int> result(n, 1);

        // Calculate products of elements to the left of each index
        long long int leftProduct = 1;
        for (int i = 1; i < n; ++i) {
            leftProduct *= nums[i - 1];
            leftProducts[i] = leftProduct;
        }

        // Calculate products of elements to the right of each index
        long long int rightProduct = 1;
        for (int i = n - 2; i >= 0; --i) {
            rightProduct *= nums[i + 1];
            rightProducts[i] = rightProduct;
        }

        // Calculate the final product array
        for (int i = 0; i < n; ++i) {
            result[i] = leftProducts[i] * rightProducts[i];
        }

        return result;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends