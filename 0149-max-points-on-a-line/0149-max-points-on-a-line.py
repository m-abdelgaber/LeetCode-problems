class Solution(object):
    def maxPoints(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        if(len(points) ==1):
            return 1
        if(len(points) ==2):
            return 2
        def check_if_on_line(p_anc, m,is_infinity, p_test):
            # print(p_test[0] , p_anc[0])
            if(is_infinity and (p_test[0] - p_anc[0]) == 0):
                return True
            elif (p_test[0] - p_anc[0]) ==0:
                return False
            elif(is_infinity):
                return False
            elif(p_test[1] - p_anc[1]+ 0.0)/(p_test[0] - p_anc[0]) == m:
                return True 
            return False
        
#         return true if slope is infinity (divided by zero)
        def calc_slope(p1,p2):
            try:
                return ((p1[1]-p2[1] +0.0)/(p1[0]-p2[0]), False)
            except ZeroDivisionError:
                return (0,True)
        
        max_points = 2
        
        for i in range(0,(len(points)-2)):
            p1 = points[i]    
            for j in range((i+1), len(points)-1):
                p2 = points[j]
                m,is_infinity = calc_slope(p1,p2)
                # print(m,is_infinity)
                points_count=2
                for k in range((j+1), len(points)):
                    p3 = points[k]
                    if(check_if_on_line(p1, m, is_infinity, p3)):
                        points_count+=1
                if(points_count> max_points):
                    max_points = points_count
        return max_points
        