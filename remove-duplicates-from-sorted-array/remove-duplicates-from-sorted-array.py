class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if(len(nums)==0):
            return nums
        i=1
        a = nums[0]
        
        for j in range(1, len(nums)):
            if (nums[j] != a):
                a = nums[j]
                nums[i] = nums[j]
                i+=1
        return i