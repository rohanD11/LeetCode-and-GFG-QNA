class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>arr;
        int n=nums.size();
      k=k%n;
        for(int i=n-k;i<n;i++){
           arr.push_back(nums[i]);
        }
        for(int i=n-1;i>=(k);i--){
        nums[i]=nums[i-k];
        }
        for(int i=0;i<arr.size();i++){
            nums[i]=arr[i];
        }
    }
};