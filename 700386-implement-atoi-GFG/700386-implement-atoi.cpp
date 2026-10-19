class Solution {
  public:
    int myAtoi(string &s) {
        int i = 0;
        int n = s.length();
        int sign = 1;
        long result = 0;

        
        while (i < n && s[i] == ' ') {
            i++;
        }

       
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }

        
        while (i < n && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

           
            if (sign * result >= INT_MAX) {
                return INT_MAX;
            }
            if (sign * result <= INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna