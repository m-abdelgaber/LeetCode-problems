class Solution(object):
    def minDeletionSize(self, strs):
        """
        :type strs: List[str]
        :rtype: int
        """
        
        count =0
        for i in range(0, len(strs[0])):
            for j in range(0, len(strs)-1):
                if(ord(strs[j][i]) > ord(strs[j+1][i])):
                    count +=1
                    break
        return count