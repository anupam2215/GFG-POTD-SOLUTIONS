//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int countTrailingZeros(long long num) {
        int count = 0;
        long long i = 5;
        while (num / i >= 1) {
            count += num / i;
            i *= 5;
        }
        return count;
    }
        int findNum(int n)
        {
        //complete the function here
         if (n == 1)
            return 5;

        int low = 0, high = 5 * n;
        while (low < high) {
            int mid = (low + high) / 2;
            int zeros = countTrailingZeros(mid);

            if (zeros < n) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
            return low;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends