class Solution:
    def isPalindrome(self, s: str) -> bool:
        s.replace(" ", "")
        i =0
        j = 1
        alphanumeric = "abcdefghijklmnopqrstuvwxtyz0123456789"
        while i<len(s) and j<len(s) + 1:
            while ((s[i]).lower() not in alphanumeric):
                i +=1
                if(i>=len(s)):
                    return True
            while((s[-j]).lower() not in alphanumeric):
                j +=1
                if(j>=len(s)+1):
                    return True
            if(i+j == len(s)):
                return True
            if((s[i]).lower()!= (s[-j]).lower()):
                return False
            i+=1
            j+=1
        return True