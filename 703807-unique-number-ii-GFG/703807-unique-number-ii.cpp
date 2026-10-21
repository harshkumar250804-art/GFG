class Solution {
public:
    vector<int> singleNum(vector<int>& arr) {
        long long xor_sum = 0;
        for (int num : arr) {
            xor_sum ^= num;
        }

        long long rightmost_set_bit = xor_sum & -xor_sum;

        int a = 0, b = 0;
        for (int num : arr) {
            if (num & rightmost_set_bit) {
                a ^= num;
            } else {
                b ^= num;
            }
        }

        if (a > b) swap(a, b);
        return {a, b};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna