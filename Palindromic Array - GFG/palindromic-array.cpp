//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  int checkpali(int n)
    {
        int r=0;
        while(n>0){
            int p=n%10;
            r=r*10+p;
            n/=10;
        }
        return r;
        
    }
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i=0 ; i< n ; i++){
            if(a[i] == checkpali(a[i]))
                continue;
                
            else
                return 0;
        }
        return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends