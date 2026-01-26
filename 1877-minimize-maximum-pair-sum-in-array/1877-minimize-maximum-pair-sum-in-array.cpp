class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int l = 0, r = len - 1, ans = 0;

        while(l < r){
            ans = max(nums[l] + nums[r], ans);
            l++;
            r--;
        }
        
        return ans;
    }
};