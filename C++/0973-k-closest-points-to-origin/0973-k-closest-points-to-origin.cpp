class Car {
public:
    int idx;
    int distSq;

    Car(int idx, int distSq) {
        this->idx = idx;
        this->distSq = distSq;
    }

    bool operator < (const Car &obj) const {
        return this->distSq > obj.distSq; // min heap
    }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        // idx, distance square store
        vector<Car> cars;

        for (int i = 0; i < points.size(); i++) {

            int distSq = (points[i][0] * points[i][0]) +
                         (points[i][1] * points[i][1]);

            cars.push_back(Car(i, distSq));
        }

        // O(n)
        priority_queue<Car> pq(cars.begin(), cars.end());

        vector<vector<int>> ans;

        for (int i = 0; i < k; i++) {

            int idx = pq.top().idx;

            ans.push_back(points[idx]);

            pq.pop();
        }

        return ans;
    }
};