class Solution(object):
    def countGoodSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        if(len(s) < 3):
            return 0
        start =0
        counter =0
        
        while(start< len(s)-2):
            
            
            if(s[start]!= s[start+1] and s[start+1] != s[start+ 2] and s[start+ 2] != s[start]):
                counter+=1
            start +=1
            
        return counter