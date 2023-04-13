class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        
        out =[]
        nums = sorted(nums)
        for i in range(0,len(nums)-2):
            if(i==0 or nums[i]!= nums[i-1]):
                left = i+1
                right = len(nums)-1
                summ = - nums[i]
                while(left<right):
                    
                    if(nums[left]+ nums[right] == summ):
                        out += [[nums[i], nums[left], nums[right]]]
                        while(left<right and nums[left] == nums[left+1]): left+=1
                        while(left<right and nums[right] == nums[right-1]): right-=1
                        left+=1
                        right-=1
                    elif(nums[left]+ nums[right] > summ):
                        right-=1
                    else:
                        left+=1
                    

        return out
                        
            