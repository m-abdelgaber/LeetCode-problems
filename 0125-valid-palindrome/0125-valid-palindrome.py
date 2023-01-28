class Solution:
    def isPalindrome(self, s: str) -> bool:
        # s.replace(" ", "")
        # i =0
        # j = 1
        alphanumeric = "abcdefghijklmnopqrstuvwxtyz0123456789"
        lp = 0 #left pointer
        rp = len(s)-1 #right pointer
        
        def isAlphaNumeric(c):
            return c.isalnum()
        
        while(lp < rp):    
            if(not isAlphaNumeric(s[lp]) ):
                lp+=1
            elif(not isAlphaNumeric(s[rp]) ):
                rp-=1
            else:
                if(s[lp].lower() != s[rp].lower()):
                    return False    
                lp+=1
                rp-=1
                
        
        return True
            
        