// --------------------------------------------------
// ---------------Brute Force Solution---------------
// --------------------------------------------------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // Return Blank if no Solution is found
    }
};

// --------------------------------------------------
// ---------------Hash Map Solution------------------
// --------------------------------------------------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();

        // Find the complement
        for (int i = 0; i < n; i++) {
            int remain = target - nums[i];
            if (map.find(remain) != map.end()) {
                return {map[remain], i};
            } else {
                map[nums[i] = i;
            }
        }
        return {}; // No solution found
    }
};
