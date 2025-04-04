class Solution(object):
    def findAllRecipes(self, recipes, ingredients, supplies):
        graph = defaultdict(list)
        indegree = {}
        available = set(supplies)
        
        for i, recipe in enumerate(recipes):
            indegree[recipe] = len(ingredients[i])
            for ingredient in ingredients[i]:
                if ingredient not in available:
                    graph[ingredient].append(recipe)
                else:
                    indegree[recipe] -= 1

        queue = deque([recipe for recipe in recipes if indegree[recipe] == 0])
        result = []

        while queue:
            recipe = queue.popleft()
            result.append(recipe)

            for dependent in graph[recipe]:
                indegree[dependent] -= 1
                if indegree[dependent] == 0:
                    queue.append(dependent)
        
        return result