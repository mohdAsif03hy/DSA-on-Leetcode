class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses, 0);

        // Graph banana
        for (auto &p : prerequisites) {
            int course = p[0];
            int prerequisite = p[1];

            adj[prerequisite].push_back(course);
            indegree[course]++;
        }

        queue<int> q;

        // Jinke prerequisites 0 hain
        for (int i = 0; i < numCourses; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }

        int count = 0;

        while (!q.empty()) {

            int course = q.front();
            q.pop();

            count++;

            // Is course ko complete karne ke baad
            // dependent courses ki indegree decrease karo
            for (int next : adj[course]) {

                indegree[next]--;

                if (indegree[next] == 0) {
                    q.push(next);
                }
            }
        }

        // Agar saare courses process ho gaye
        return count == numCourses;
    }
};