class Solution {
public:

    bool dfs(int v, vector<vector<int>>& adj,
             vector<bool>& visited, int destination) {
        if (v == destination)
            return true;
        visited[v] = true;
        for (int i = 0; i < adj[v].size(); i++) {

            int neighbour = adj[v][i];

            if (!visited[neighbour]) {

                if (dfs(neighbour, adj, visited, destination)) {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges,
                   int source, int destination) {
        vector<vector<int>> adj(n);
        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(n, false);
        return dfs(source, adj, visited, destination);
    }
};