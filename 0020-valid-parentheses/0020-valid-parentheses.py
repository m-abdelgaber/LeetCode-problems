class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        myStack = deque() 
        
        paren = {'[': ']', '{': '}', '(': ')'}
        for e in s:
            if e in paren:
                myStack.append(e)
            else:
                if((len(myStack) ==0) or (paren[myStack[-1]] != e)):
                    return False
                myStack.pop()

        return len(myStack) ==0
