class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if (len(s) != len(t)):
            return False
        s_chars_count = dict()
        
        for char in s:
            if char in s_chars_count:
                s_chars_count[char] +=1
            else:
                s_chars_count[char] =1
        
        
        unmatched_chars_counter = len(s)
        for t_char in t:
            if t_char not in s_chars_count or s_chars_count[t_char] ==0:
                return False
            s_chars_count[t_char] -=1
            unmatched_chars_counter-=1
        return unmatched_chars_counter ==0