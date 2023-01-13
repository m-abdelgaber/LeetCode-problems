class Solution(object):
    def countSubTrees(self, n, edges, labels):
        """
        :type n: int
        :type edges: List[List[int]]
        :type labels: str
        :rtype: List[int]
        """
        # this creates a defaultdict with the default factory set to list to be able
        # to access indicies directly without initialize and return [] if not available
        
        g= defaultdict(list)
        ans = [0]*n
        visited = set()
        
        for a,b in edges:
            g[a]+= [b]
            g[b]+= [a]
        
        def dfs(node):
            # A counter object is used to count the number of occurrences of items in a
            # list or other iterable. It takes an iterable as input, and it creates a
            # dictionary-like object where the keys are elements from the iterable and the
            # values are their frequency count.
            cnt = Counter()
            if node not in visited:
                visited.add(node)
                cnt[labels[node]] +=1
                # return [] if key doesn't exist
                children = g.get(node, [])
                for child in children:
                    cnt += dfs(child)
                ans[node] = cnt[labels[node]]
            return cnt
        dfs(0)
        return ans
    
        
    
        