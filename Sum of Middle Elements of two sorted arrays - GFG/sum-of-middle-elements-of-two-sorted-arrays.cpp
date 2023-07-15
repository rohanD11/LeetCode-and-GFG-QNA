//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int a[], int b[], int n) {
            // code here 
            int i=n-1;
            int j=0;
            while(j<n&&i>=0){
                if(a[i]<=b[j])break;
                if(a[i]>=b[j]){
                    swap(a[i],b[j]);
                  
                }
                  i--;
                j++;
                
            }
            sort(a,a+n);
            sort(b,b+n);
        return a[n-1]+b[0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends