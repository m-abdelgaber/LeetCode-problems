class Solution(object):
    def minFlipsMonoIncr(self, s):
        """
        :type s: str
        :rtype: int
        """
        c = 0
        myStack = deque() 
        
        for char in s:
            if char =='0':
                if len(myStack)>0 and myStack[0] == '1':
                    myStack.pop()
                    c+=1
            else:
                myStack.append('1')
        return c 