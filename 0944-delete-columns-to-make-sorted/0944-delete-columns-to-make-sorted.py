class Solution(object):
    def minDeletionSize(self, strs):
        """
        :type strs: List[str]
        :rtype: int
        """
        
        count =0
        for i in range(0, len(strs[0])):
            for j in range(0, len(strs)-1):
                if(strs[j][i] > strs[j+1][i]):
                    count +=1
                    break
        return count