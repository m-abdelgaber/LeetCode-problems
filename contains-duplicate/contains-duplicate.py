class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dic={}
        for elem in nums:
            if elem in dic:
                return True
            else:
                dic[elem] = 1
        return False