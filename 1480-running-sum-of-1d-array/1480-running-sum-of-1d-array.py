class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        if(len(nums)==0):
            return nums
        sum= nums[0]
        for i in range(1, len(nums)):
            nums[i] += sum
            sum+= nums[i] - sum
        return nums