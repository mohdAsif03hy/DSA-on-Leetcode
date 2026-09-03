class RandomizedSet {
public:
    vector<int> arr;
    unordered_map<int, int> mp;

    RandomizedSet() {
    }

    bool insert(int val) {
        // Already exists
        if (mp.find(val) != mp.end()) {
            return false;
        }

        // Store value and its index
        mp[val] = arr.size();
        arr.push_back(val);

        return true;
    }

    bool remove(int val) {
        // Value doesn't exist
        if (mp.find(val) == mp.end()) {
            return false;
        }

        int index = mp[val];

        // Last element
        int lastElement = arr.back();

        // Put last element at the position of val
        arr[index] = lastElement;

        // Update last element's index
        mp[lastElement] = index;

        // Remove last element
        arr.pop_back();

        // Remove val from hashmap
        mp.erase(val);

        return true;
    }

    int getRandom() {
        int index = rand() % arr.size();
        return arr[index];
    }
};