class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int len = people.size();
        for(auto &v : people) cout << v << " ";
        
        int l = 0, r = len - 1, cnt = 0;

        while(l < r){
            int cur = people[r] + people[l];

            if(cur <= limit) l++;
            r--;
            cnt++;
            
        }

        if(l == r) cnt++;

        return cnt;
    }
};

