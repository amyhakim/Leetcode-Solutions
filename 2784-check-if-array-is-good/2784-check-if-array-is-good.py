class Solution:
    def isGood(self, nums: List[int]) -> bool:
        mp = defaultdict(int)
        n = max(nums)
        m = min(nums)
        sz = len(nums)
        for x in nums:
            mp[x] += 1
            if x != n and mp[x] > 1: return False
        for x in range(1, sz):
            if mp[x] == 0: return False

        if mp[n] != 2: return False
        if mp[n] == 2 and sz < n: return False

        return True
          