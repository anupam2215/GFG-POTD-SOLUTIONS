//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
         d= d%n; // ye use kre taaki d k range me rhe
        reverse(arr,arr+d); // ye array ko reverse krega d tk eg [2, 1 , 3 , 4 , 5]
        reverse(arr+d,arr+n); // ye reverse kerga d se pura last tk eg . [2,1 , 5 , 4 , 3]
        reverse(arr,arr+n);// or ye current aaray ko reverse kr dega [3,4,5,2,1]
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends