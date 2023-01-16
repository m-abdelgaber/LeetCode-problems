class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        num_hash = {}
        for i in range(0, len(nums)):
            if(target - nums[i] in num_hash):
                return [i, num_hash[target-nums[i]]]
            num_hash[nums[i]] = i        
        
        