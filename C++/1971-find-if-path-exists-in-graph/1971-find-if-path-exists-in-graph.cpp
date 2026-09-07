class Solution {
public:
    bool dfs(int node, int destination, vector<vector<int>>& adj, vector<bool>& vis) {
        if (node == destination) {
            return true;
        }

        vis[node] = true;

        for (int v : adj[node]) {
            if (!vis[v]) {
                if (dfs(v, destination, adj, vis)) {
                    return true;
                }
            }
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n, false);
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        return dfs(source, destination, adj, vis);
    }
};