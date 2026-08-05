class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int mini = 101, maxi = 0;
        for(auto &v : nums){
            mp[v]++;
            mini = min(mini, v);
            maxi = max(maxi, v);
        }

        vector<int> ans;
        for(int i = mini + 1; i < maxi; i++){
            if(mp[i] == 0) ans.push_back(i);
        }

        return ans;
    }


};