class Solution(object):
    def longestPath(self, parent, s):
        """
        :type parent: List[int]
        :type s: str
        :rtype: int
        """
        children = [[] for i in range(len(s))]
        for i,j in enumerate(parent):
            if j >= 0:
                children[j].append(i)
        
        res = [0]
        def dfs(i):
            candi = [0]
            for j in children[i]:
                cur = dfs(j)
                if s[i] != s[j]:
                    candi.append(cur)
                    
            candi = nlargest(2, candi)
            res[0] = max(res[0], sum(candi) + 1)
            return max(candi) + 1
        
        dfs(0)
        return res[0]
#         if(len(s)==1):
#             return 1
#         g = defaultdict(list)
#         seen = set()
#         for i in range(1,len(parent)):
#             g[i] += [parent[i]]
#             g[parent[i]] += [i]
#         print(g)
        
#         def dfs(node):
#             maxx = 0
#             if node not in seen:
#                 seen.add(node)
#                 maxx = 1
#                 for child in g.get(node,[]):
#                     max_child = 0
#                     if(s[child] != s[node]):
#                         max_child = 1+ dfs(child)
#                     maxx = max(maxx, max_child)
                
#             return maxx
        
#         max1 =0
#         max2=0
#         seen.add(0)
#         for child in g.get(0):
#             res = 0
#             if(s[child]!=s[0]):
#                 res = dfs(child)
#             if(res>max1):
#                 max2 = max1
#                 max1 = res
#             elif (res>max2):
#                 max2 = res
#             print(res, max1, max2)
#         return 1 + max1+ max2
        # print(dfs(2))