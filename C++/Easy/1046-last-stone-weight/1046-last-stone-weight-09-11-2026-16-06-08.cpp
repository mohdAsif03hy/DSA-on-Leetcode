class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> stone;

        for (int x : stones)
            stone.push(x);

        while (stone.size() > 1) {
            int first = stone.top();
            stone.pop();

            int second = stone.top();
            stone.pop();

            if (first != second)
                stone.push(first - second);
        }
        return stone.empty() ? 0 : stone.top();
    }
};