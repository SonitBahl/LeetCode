class Solution(object):
    def countCompleteComponents(self, n, edges):
        """
        :type n: int
        :type edges: List[List[int]]
        :rtype: int
        """

        graph = defaultdict(set)
        for u, v in edges:
            graph[u].add(v)
            graph[v].add(u)
        
        visited = set()
        complete_components = 0
        def is_complete(component):
            size = len(component)
            for node in component:
                if len(graph[node]) != size - 1:  
                    return False
            return True
        
        for i in range(n):
            if i not in visited:
                queue = deque([i])
                component = set()
                visited.add(i)
                
                while queue:
                    node = queue.popleft()
                    component.add(node)
                    for neighbor in graph[node]:
                        if neighbor not in visited:
                            visited.add(neighbor)
                            queue.append(neighbor)
                if is_complete(component):
                    complete_components += 1
        
        return complete_components