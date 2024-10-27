# LeetDaily Challenge: Longest Common Prefix

**LeetCode Problem #14**  
**Difficulty**: Easy

**Link to the Problem**: [LeetCode - Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)

---

### Scenario:
The **Longest Common Prefix Problem** requires us to find the longest common prefix string among an array of strings. If there is no common prefix, we should return an empty string.

---

### Approach:

1. **Initial Check**:
   - If the input array `strs` is empty, immediately return an empty string as there are no strings to compare.

2. **Prefix Character-by-Character**:
   - Start with the first string in the array as a reference.
   - For each character in the first string, check if it is common across all strings at that position:
     - If any string runs out of characters or has a different character at that position, stop and return the current result.
     - Otherwise, append the character to the result and continue.

---

### Code (C++):

```cpp
#include <vector>
#include <string>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) {
            return "";  // Return empty string if no strings are provided
        }
        
        std::string res = "";
        for (int i = 0; i < strs[0].size(); i++) {
            for (std::string s : strs) {
                if (i == s.size() || s[i] != strs[0][i]) {
                    return res;
                }
            }
            res += strs[0][i];
        }
        
        return res;
    }
};
```

---

### Explanation:

- **Character-by-Character Comparison**: Start with the first string as a baseline. For each character position, check if every string matches this character:
  - If all strings have the character at that position, add it to the result.
  - If any string does not have the character at that position, or the characters do not match, stop and return the current result.

---

### Complexity Analysis:

- **Time Complexity**: O(S), where `S` is the sum of all characters in all strings.
  - In the worst case, all strings are the same, and we check every character of each string.

- **Space Complexity**: O(1)
  - Only a constant amount of extra space is used for the result string (excluding input storage).

---

### Follow for More:
- Watch the full explanation on TikTok: [Link to TikTok Video](#)
- Follow me for daily coding challenges and solutions! 🚀
