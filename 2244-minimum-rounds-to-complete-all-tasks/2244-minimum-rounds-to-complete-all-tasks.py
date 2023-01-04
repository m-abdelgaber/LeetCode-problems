class Solution(object):
    def minimumRounds(self, tasks):
        """
        :type tasks: List[int]
        :rtype: int
        """
        def divide_into_multiples(num):
            if(num%3 ==0):
                return num/3
            return (num/3 -1) + (num- 3*(num/3 -1))/2
        difficulty_counter = {}
        
        for task in tasks:
            if task in difficulty_counter:
                difficulty_counter[task] +=1
            else:
                difficulty_counter[task] = 1
        
        sol_counter =0
        for elem in difficulty_counter:
            if(difficulty_counter[elem] <2):
                return -1
            sol_counter += divide_into_multiples(difficulty_counter[elem])
        
        return sol_counter
    
        