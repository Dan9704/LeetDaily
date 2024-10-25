# LeetDaily Challenge: Palindrome Number

**LeetCode Problem #9**  
**Difficulty**: Easy

**Link to the Problem**: [LeetCode - Palindrome Number](https://leetcode.com/problems/palindrome-number/)

---

### Scenario:
The **Palindrome Number Problem** requires us to determine if a given integer `x` is a palindrome. A palindrome number reads the same backward as forward. Negative numbers are not considered palindromic.

---

### Approach:

1. **Initial Check**:
   - If the number `x` is negative, return `false` because negative numbers cannot be palindromic.

2. **Digit Comparison**:
   - Calculate the largest power of 10 divisor (`div`) to extract the most significant digit.
   - Use two pointers-like approach: check the leftmost and rightmost digits. If they don’t match, return `false`.
   - Continue reducing the number by removing the checked digits from both ends, adjusting `div` accordingly.

---

### Code (C++):

```cpp
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        long long div = 1;  
        while (x >= 10 * div) {
            div *= 10;
        }

        while (x) {
            int right = x % 10;
            int left = x / div;

            if (left != right) {
                return false;
            }

            x = (x % div) / 10;
            div /= 100;
        }
        return true;
    }
};
```

---

### Explanation:

- **Divisor Calculation**: We calculate `div` to identify the most significant digit by increasing `div` until it’s greater than or equal to `x`.
- **Digit Matching**: We compare the leftmost and rightmost digits. If they are not the same, the number isn’t a palindrome.
- **Reduce Number**: After comparing, we remove the leftmost and rightmost digits and adjust `div` by dividing it by 100, effectively moving toward the center of the number.

---

### Complexity Analysis:

- **Time Complexity**: O(log₁₀(n)), where `n` is the input number.
  - We reduce the number of digits to check by two on each iteration, making the complexity logarithmic in the number of digits.

- **Space Complexity**: O(1)
  - Only a constant amount of space is used for variables, making the space complexity constant.

---

### Follow for More:
- Watch the full explanation on TikTok: [Link to TikTok Video](#)
- Follow me for daily coding challenges and solutions! 🚀
