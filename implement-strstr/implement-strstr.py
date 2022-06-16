class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        # if (len(needle) == 0):
        #     return 0
        # if(len(haystack) < len(needle)):
        #     return -1
        # needle_index=0
        # intersect_start_index=-1
        # for char_i in range(0, len(haystack)):
        #     char = haystack[char_i]
        #     if(char == needle[needle_index]):
        #         if(needle_index==0):
        #             intersect_start_index= char_i
        #         needle_index+=1
        #     else:
        #         needle_index =0
        #         intersect_start_index = -1
        #     if needle_index == len(needle) :
        #         break
        # return intersect_start_index
        return haystack.find(needle)