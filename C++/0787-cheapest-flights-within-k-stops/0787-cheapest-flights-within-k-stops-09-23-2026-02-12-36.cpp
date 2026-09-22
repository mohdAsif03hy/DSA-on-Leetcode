class Solution {
public:

    struct Info {
        int node;
        int cost;
        int stops;

        Info(int n, int c, int s) {
            node = n;
            cost = c;
            stops = s;
        }
    };

    int findCheapestPrice(int n, vector<vector<int>>& flights,
                          int src, int dst, int k) {

        queue<Info> q;

        vector<int> dist(n, INT_MAX);

        dist[src] = 0;

        q.push(Info(src, 0, 0));

        while (!q.empty()) {

            Info curr = q.front();
            q.pop();

            // If we have already used k stops,
            // we cannot take another flight
            if (curr.stops > k)
                continue;

            for (int i = 0; i < flights.size(); i++) {

                // Find flights starting from current node
                if (flights[i][0] == curr.node) {

                    int v = flights[i][1];
                    int wt = flights[i][2];

                    // Relaxation
                    if (dist[v] > curr.cost + wt) {

                        dist[v] = curr.cost + wt;

                        q.push(
                            Info(v, dist[v], curr.stops + 1)
                        );
                    }
                }
            }
        }

        if (dist[dst] == INT_MAX)
            return -1;

        return dist[dst];
    }
};