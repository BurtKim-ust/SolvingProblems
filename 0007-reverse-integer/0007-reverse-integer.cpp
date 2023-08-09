class Solution {
public:
    int reverse(int x) {
        int result=0;
        while (x != 0) {
        // Check for potential overflow before updating result
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && x % 10 > 7)) {
            return 0;  // Return 0 for overflow
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && x % 10 < -8)) {
            return 0;  // Return 0 for underflow
        }
        
        result *= 10;
        result += x % 10;
        x /= 10;
    }
        
        return result;
    }
};