class Solution(object):
    def findMinArrowShots(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        # sorting the points by the x-Start of them
        def compare(item1, item2):
            if item1[0] < item2[0]:
                return -1
            elif item1[0] > item2[0]:
                return 1
            # elif item1[0] == item2[0] and item1[1] < item2[1]:
            #     return -1
            # elif item1[0] == item2[0] and item1[1] > item2[1]:
            #     return 1
            else:
                return 0
        def get_intersect(item1, item2):
            max_left = max(item1[0], item2[0])
            min_right = min(item1[1], item2[1])
            if max_left> min_right:
                return -1
            return [max_left, min_right]
        points = sorted(points, cmp=compare)
        
        count = 0
        curr_range = points[0]
        for item in points:
            intersect = get_intersect(curr_range, item)
            if(intersect ==-1):
                count+=1
                curr_range = item
            else:
                curr_range = intersect
        
        return count+1
        