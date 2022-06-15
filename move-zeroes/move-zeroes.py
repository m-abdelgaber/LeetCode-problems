class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeros_indices = []
        for i in range(0,len(nums)):
            elem = nums[i]
            if elem == 0:
                zeros_indices.append(i)
            elif (len(zeros_indices) > 0):
                nums[zeros_indices[0]] = elem
                nums[i] = 0
                zeros_indices.pop(0)
                zeros_indices.append(i)
            # print(zeros_indices)
            # print(nums)