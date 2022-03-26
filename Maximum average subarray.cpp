// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
        // code here
        double su=0;
        for(int i=0;i<k;i++) su+=arr[i];
        double ma=su/(k*1.0);
        //cout<<ma<<'\n';
        int ind=0;
        for(int i=0;i<(n-k);i++)
        {
            su=su-arr[i]+arr[i+k];
            if(ma<(su/(k*1.0))) 
            {
                ind=i+1;
                ma=su/k;
            }
        }
        return ind;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
