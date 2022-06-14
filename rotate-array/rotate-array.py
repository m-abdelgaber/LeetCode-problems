class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        a=[0]*len(nums)
        for elem in range(0, len(nums)):
            new_index = (elem + k)% len(nums)
            a[new_index] = nums[elem]
        for i in range(0,len(a)):
            nums[i] = a[i]