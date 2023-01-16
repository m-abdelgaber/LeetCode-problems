class Solution(object):
    def countGoodSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        if(len(s) < 3):
            return 0
        end =3
        window_chars = set()
        counter =0
        # window_chars.add(s[0])
        # window_chars.add(s[1])
        # window_chars.add(s[2])
        
        while(end< len(s)+1):
            
            print(window_chars)
            string = s[end-3:end]
            
            for char in string:
                window_chars.add(char)
            # print(string, window_chars)
            if(len(window_chars)==3):
                counter+=1
            window_chars.clear()
            end +=1
            
        return counter