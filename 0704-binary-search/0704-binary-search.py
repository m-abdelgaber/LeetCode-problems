class Solution:
    def search(self, nums: List[int], target: int) -> int:
        lp = 0
        rp = len(nums)-1
        m = (lp + rp)//2
        
        while rp>= lp:
            if nums[m] == target:
                return m
            elif nums[m]> target:
                rp = m-1
                m = (lp + rp)//2
            else:
                lp = m+1
                m = (lp + rp)//2
            
        return -1
                