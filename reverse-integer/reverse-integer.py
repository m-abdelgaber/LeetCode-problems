class Solution:
    def reverse(self, x: int) -> int:
        is_negative = False
        if(x<0):
            is_negative = True
            x = x*-1
        res=0
        while x !=0:
            res *=10
            res+= (x%10)
            x = x//10
        if(res > pow(2,31)-1):
            res=0
        if is_negative:
            return -res
        return res