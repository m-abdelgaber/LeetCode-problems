class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        dic1={}
        dic2 ={}
        out=[]
        for elem in nums1:
            if elem in dic1:
                dic1[elem] +=1
            else:
                dic1[elem] = 1
        for elem in nums2:
            if elem in dic2:
                dic2[elem] +=1
            else:
                dic2[elem] = 1
                
        for elem in dic1:
            dic2_val =0
            if(elem in dic2):
                dic2_val = dic2[elem]
            dic1_val = dic1[elem]
            intersect = min(dic1_val , dic2_val)
            out+= [elem] * intersect
        return out