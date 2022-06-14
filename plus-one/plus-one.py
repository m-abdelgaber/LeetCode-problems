class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry=1
        for i in range(1, len(digits)+1):
            if(digits[-i]<9):
                digits[-i] +=1
                carry=0
                break
            else:
                digits[-i] = 0
        if(carry ==1):
            digits = [1]+digits
        return digits