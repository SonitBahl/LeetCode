class Solution {
    public:
        vector<int> minimumCost(int n, vector<vector<int>>& edges, vector<vector<int>>& query) {
            vector<vector<pair<int, int>>> graph(n);
            vector<int> parent(n), minAND(n, INT_MAX);
            iota(parent.begin(), parent.end(), 0); 
            
            function<int(int)> find = [&](int x) {
                return parent[x] == x ? x : parent[x] = find(parent[x]);
            };
            
            auto merge = [&](int u, int v) {
                int pu = find(u), pv = find(v);
                if (pu != pv) parent[pu] = pv;
            };
            for (auto& e : edges) {
                int u = e[0], v = e[1], w = e[2];
                graph[u].emplace_back(v, w);
                graph[v].emplace_back(u, w);
                merge(u, v);
            }
    
            unordered_map<int, int> componentAND;
            vector<bool> visited(n, false);
            
            for (int i = 0; i < n; ++i) {
                if (visited[i]) continue;
                
                int root = find(i);
                int minCost = INT_MAX;
                queue<int> q;
                q.push(i);
                visited[i] = true;
                
                while (!q.empty()) {
                    int node = q.front(); q.pop();
                    for (auto& [next, weight] : graph[node]) {
                        minCost &= weight;
                        if (!visited[next]) {
                            visited[next] = true;
                            q.push(next);
                        }
                    }
                }
                componentAND[root] = minCost;
            }
            vector<int> result;
            for (auto& q : query) {
                int u = q[0], v = q[1];
                if (find(u) != find(v)) result.push_back(-1);
                else result.push_back(componentAND[find(u)]);
            }
            
            return result;
        }
    };
    