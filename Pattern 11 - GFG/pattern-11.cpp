//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here4
        bool yes=true;
        for(int i=0;i<n;i++){
            if(i%2==0)yes=true;
            else yes=false;
            for(int j=0;j<=i;j++){
                if(yes){
                    cout<<"1 ";
                    yes=!yes;
                }else {cout<<"0 ";
                    yes=!yes;
                }
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends