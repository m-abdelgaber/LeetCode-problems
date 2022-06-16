class Solution:
    def myAtoi(self, s: str) -> int:
        sign_is_positive = True
        sign_taken = False
        int_start_index = -1
        int_end_index = -1
        res = "0"
        for char_i in range(0, len(s)):
            char = s[char_i]
            if(not sign_taken):
                if char ==' ' :
                    continue
                if(char =='-'):
                    sign_taken = True
                    sign_is_positive = False
                    continue
                elif(char == '+' ):
                    sign_taken = True
                    continue
                elif (char in "0123456789"):
                    sign_taken = True
                    
            if char in "0123456789":
                res+= char
            else:
                break
        numerical_res = int(res) * (1 if sign_is_positive else -1)
        numerical_res = min(pow(2,31)-1, numerical_res) if sign_is_positive else max(-pow(2,31), numerical_res)
        return numerical_res