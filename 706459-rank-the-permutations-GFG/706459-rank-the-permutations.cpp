class Solution {
public:
    long long findRank(string& s) {
        int n = s.length();

        
        vector<long long> fact(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            fact[i] = fact[i - 1] * i;
        }

        long long rank = 1;

        for (int i = 0; i < n; i++) {
            int countSmaller = 0;
            for (int j = i + 1; j < n; j++) {
                if (s[j] < s[i]) {
                    countSmaller++;
                }
            }

            rank += countSmaller * fact[n - 1 - i];
        }

        return rank;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna