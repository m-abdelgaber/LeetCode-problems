class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        myStack = deque() 
        

        for e in s:
            if e in "([{":
                myStack.append(e)
            elif (e == ")" ):
                if(len(myStack) == 0 or myStack[-1] != "("):
                    return False
                myStack.pop()

            elif (e == "]"):
                if(len(myStack) == 0 or myStack[-1] != "["):
                    return False
                myStack.pop()
            elif ( e=="}"):
                if(len(myStack) == 0 or myStack[-1] != "{"):
                    return False
                myStack.pop()

        if(len(myStack) ==0):
            return True 
        print(myStack)
        return False