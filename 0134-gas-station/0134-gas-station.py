class Solution(object):
    def canCompleteCircuit(self, gas, cost):
        """
        :type gas: List[int]
        :type cost: List[int]
        :rtype: int
        """
        diff = [a_i - b_i for a_i, b_i in zip(gas, cost)]
        # diff = gas - cost
        start_ind = -1
        accumilative_diff = -1
        index =0
        overall_counter =0
        pos_counter = 0
        
        while(True):
            if(pos_counter == len(diff) and accumilative_diff>=0):
                return start_ind
            elif(overall_counter == 2*len(diff)):
                return -1
            elem = diff[index%len(diff)]
            if(accumilative_diff<=0):
                
                if(elem>=0):
                    start_ind = index
                    accumilative_diff = elem
                    pos_counter = 1
                else:
                    pos_counter = 0
                    accumilative_diff += elem
            else:
                accumilative_diff += elem
                pos_counter+=1
            overall_counter+=1
            index+=1
            
                    
        
        # for ind in range(1,len(diff)):
        #     elem = diff[ind]
        #     if accumilative_diff < 0:
        #         if elem>0:
        #             index = ind
        #             accumilative_diff = elem
        #     else:
        #         accumilative_diff + diff[ind]
                    
        