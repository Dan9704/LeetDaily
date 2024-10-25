# LeetDaily Challenge: Roman to Integer

**LeetCode Problem #13**  
**Difficulty**: Easy

**Link to the Problem**: [LeetCode - Roman to Integer](https://leetcode.com/problems/roman-to-integer/)

---

### Scenario:
The **Roman to Integer Problem** requires us to convert a Roman numeral string to an integer. Roman numerals are represented by the symbols I, V, X, L, C, D, and M, each with a specific integer value. Some numerals are subtracted rather than added when a smaller numeral appears before a larger one.

---

### Approach:

1. **Mapping Roman Symbols to Values**:  
   - We store each Roman symbol’s integer value in a hash map for easy lookup.

2. **Iteration with Conditional Addition/Subtraction**:
   - For each character in the string, check if its value is less than the value of the next character:
     - If yes, subtract it (indicating it should be subtracted from the total).
     - If not, add it to the total.

---

### Code (C++):

```cpp
#include <unordered_map>
#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            if (roman[s[i]] < roman[s[i + 1]]) {
                ans -= roman[s[i]];
            } else {
                ans += roman[s[i]];
            }
        }
        return ans;
    }
};
```

---

### Explanation:

- **Mapping**: Each Roman numeral is mapped to its integer value in an unordered map for quick access.
- **Iteration**: Loop through each character in the string `s`.
  - If the current numeral is less than the next numeral, subtract it (e.g., IV is 4 because I < V).
  - Otherwise, add it to the total.
  
This approach handles both cases (addition and subtraction) in a single loop.

---

### Complexity Analysis:

- **Time Complexity**: O(n), where `n` is the length of the string `s`.
  - We only need a single pass through the string, performing constant-time operations (checking the map and adding/subtracting values).
  
- **Space Complexity**: O(1)
  - We use a fixed-size hash map with seven entries (one for each Roman numeral), making the space complexity constant. The input string does not consume any extra space in terms of storage for the computation.

---

### Follow for More:
- Watch the full explanation on TikTok: [Link to TikTok Video](#)
- Follow me for daily coding challenges and solutions! 🚀




