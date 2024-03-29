//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        deque<int>q;
        for(int i=1;i<=N;i++){
            q.push_back(i);
        }
        int ele=0;
        int i=0;
        while(!q.empty()){
            if(i==0){
                for(int i=0;i<K;i++){
                    if(!q.empty()){
                        ele=q.front();
                        q.pop_front();}
                }
            }
            if(i==1){
                for(int i=0;i<K;i++){
                    if(!q.empty()){
                        ele=q.back();
                        q.pop_back();
                    }
                }
            }
            i=!i;
        }
        return ele;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends