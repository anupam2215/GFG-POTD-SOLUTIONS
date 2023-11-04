//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution
{
    public:
    long long modInverse(long long a, long long m)
    {
        long long m0 = m;
        long long x0 = 0, x1 = 1;

        if (m == 1)
            return 0;

        while (a > 1)
        {
            // q is quotient
            long long q = a / m;

            long long t = m;

            // m is remainder now, process same as Euclid's algo
            m = a % m, a = t;

            t = x0;

            x0 = x1 - q * x0;

            x1 = t;
        }

        // Make x1 positive
        if (x1 < 0)
            x1 += m0;

        return x1;
    }
    long long  numberOfPaths(int M, int N)
    {
        // Code Here
        const int MOD = 1000000007;
        long long path = 1;
        
        for (int i = 1; i < M; i++) {
            path = (path * (N + i - 1) % MOD) * modInverse(i, MOD) % MOD;
        }
        
        return path;
    }
};


//{ Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int N, M;
		cin>>M>>N;
		Solution ob;
	    cout << ob.numberOfPaths(M, N)<<endl;
	}
    return 0;
}
// } Driver Code Ends