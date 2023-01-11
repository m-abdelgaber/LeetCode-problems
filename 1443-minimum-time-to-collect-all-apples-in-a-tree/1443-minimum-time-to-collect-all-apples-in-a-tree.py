class Solution(object):
    def minTime(self, n, edges, hasApple):
        """
        :type n: int
        :type edges: List[List[int]]
        :type hasApple: List[bool]
        :rtype: int
        """
        if (n ==1):
            return 0;
        dic_edges = {}
        visited_nodes =set()
        for edge in edges:
            if edge[0] in dic_edges:
                dic_edges[edge[0]].append(edge[1])
            else:
                dic_edges[edge[0]] = [edge[1]]
            if edge[1] in dic_edges:
                dic_edges[edge[1]].append(edge[0])
            else:
                dic_edges[edge[1]] = [edge[0]]

        def recursive_traversal( node_num):
            visited_nodes.add(node_num)
            # if (node_num in visited_nodes):
            #     return 0
            # if node_num is not out of binary edges bounds (might have children nodes)
            if(node_num in dic_edges):
                # if the node with node_num has edges with (children)  
                edges_traversed =0
                for child_node_num in dic_edges[node_num]:
                    if(child_node_num not in visited_nodes):
                        edges_traversed += recursive_traversal( child_node_num)
                    
                if(edges_traversed>0):
                    # children traversed edges
                    return 1 + edges_traversed
            # no edges with children, but has apple
            if(hasApple[node_num]):
                return 1
            # no edges with children and no apples
            return 0
        
        res = recursive_traversal(0) -1 
        if(res<0):
            return 0
        return res*2