class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int l=0;
        int r=0;
        vector<int>v;
        while(l<m&&r<n){
         if(a[l]==b[r]){
             v.push_back(a[l]);
             v.push_back(a[l]);
             l++;
             r++;
         }
         else if(a[l]<b[r]){
           v.push_back(a[l]);
           l++;
         }
         else
         {
             v.push_back(b[r]);
             r++;
         }

        }
        while(l<m){
            v.push_back(a[l]);
            l++;
        }
        while(r<n){
            v.push_back(b[r]);
            r++;
                    }
                    int j=0;
                    for(auto i:v){
                     a[j]=i;
                     j++;
                    }
    }
};