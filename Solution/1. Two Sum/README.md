# LeetDaily Challenge: Two Sum

**LeetCode Problem #1**  
**Difficulty**: Easy

**Link to the Problem**: [LeetCode - Two Sum](https://leetcode.com/problems/two-sum/description/)

---

### Scenario:
The **Two Sum Problem** asks us to find two numbers in an array that sum up to a given target. We need to return the indices of these two numbers. The problem ensures that there is exactly one solution, and the same element cannot be used twice.

---

### Approach:

1. **Brute Force**:  
   - The simplest approach where we check every pair of numbers to see if they add up to the target.  
   - **Time Complexity**: O(n²), where `n` is the length of the array.

2. **Hash Map**:  
   - We can use a hash map (dictionary) to store each number and its index as we iterate through the array. For each number, we check if its complement (target - current number) exists in the hash map.  
   - **Time Complexity**: O(n) for a single pass through the array, where `n` is the length of the array.
   - **Space Complexity**: O(n) for storing the hash map.

---

### Code:

#### Solution 1: Brute Force
```cpp
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}
```

#### Solution 2: Hash Map
```cpp
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
```

---

### Explanation:

- **Brute Force**: We loop through every possible pair and return the indices when we find a pair that adds up to the target.
- **Hash Map**: We store each number’s index in a hash map, and for each number, we check if the difference between the target and the current number exists in the map.

---

### Follow for More:
- Watch the full explanation on TikTok: [Link to TikTok Video](#)
- Follow me for daily coding challenges and solutions! 🚀
