class Solution:
    def firstUniqChar(self, s: str) -> int:
        char_occ = {}
        char_index = {}
        for i in range(0,len(s)):
            elem = s[i]
            if elem in char_occ:
                char_occ[elem] +=1
            else:
                char_occ[elem] = 1
                char_index[elem] = i
        for key in char_occ:
            if char_occ[key] ==1:
                return char_index[key]
        return -1