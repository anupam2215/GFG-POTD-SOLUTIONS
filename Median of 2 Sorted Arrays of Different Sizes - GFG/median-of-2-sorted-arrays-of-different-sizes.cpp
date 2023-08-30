//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        vector<int> rihanna;
    int snoop = array1.size();
    int dog = array2.size();
    int i = 0, j = 0;
    
    while (i < snoop && j < dog) {
        if (array1[i] < array2[j]) {
            rihanna.push_back(array1[i]);
            i++;
        } else {
            rihanna.push_back(array2[j]);
            j++;
        }
    }
    
    while (i < snoop) {
        rihanna.push_back(array1[i]);
        i++;
    }
    
    while (j < dog) {
        rihanna.push_back(array2[j]);
        j++;
    }
    
    int total_len = snoop + dog;
    int mid = total_len / 2;
    
    if (total_len % 2 == 0) {
        return ((rihanna[mid - 1]) + (rihanna[mid])) / 2.0;
    } else {
        return (rihanna[mid]);
    }
}
    
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends