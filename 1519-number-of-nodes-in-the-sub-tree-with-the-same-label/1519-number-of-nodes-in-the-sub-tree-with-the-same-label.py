class Solution(object):
    def countSubTrees(self, n, edges, labels):
        """
        :type n: int
        :type edges: List[List[int]]
        :type labels: str
        :rtype: List[int]
        """
#         if n==1:
#             return n
        
        
#         # print(node_similar_child_count)
        
        
#         adjacecy_list = [[] for i in range(n)]
#         # print(graph)
#         for idx in range(0, len(edges)):
            
#             adjacecy_list[edges[idx][0]].append(edges[idx][1])
            
#             adjacecy_list[edges[idx][1]].append(edges[idx][0])
            
#         visited = set()
#         queue =  [0]
#         label_sub_group = {}
#         while(len(queue)>0):
#             elem = queue.pop()
#             adjacent_group = adjacecy_list[elem]
#             if labels[elem] in label_sub_group:
#                 print(adjacecy_list)
#                 # print(label_sub_group)
#                 for group_elem in label_sub_group[labels[elem]]:
#                     # print(group_elem[1])
#                     if(group_elem not in adjacent_group ):
#                         group_elem[1] +=1
#             else:
#                 label_sub_group[labels[elem]] = [[elem, 1]]
#             visited.add(elem)
            
#             for adj_elem in adjacent_group:
#                 if adj_elem in visited:
#                     continue
#                 queue.append(adj_elem)
        def dfs(node):
            cnt = Counter()
            if node not in seen:
                cnt[labels[node]] += 1 
                seen.add(node)
                for child in g.get(node, []):
                    cnt += dfs(child)
                ans[node] = cnt[labels[node]]
            return cnt
        g, ans, seen = defaultdict(list), [0] * n, set()
        for a, b in edges:
            g[a] += [b]
            g[b] += [a]
        dfs(0)
        return ans 
    
        
    
        # print(label_sub_group)