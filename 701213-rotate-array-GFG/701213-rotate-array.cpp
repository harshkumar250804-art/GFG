#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        if (n == 0) return;

        // Handle cases where d is greater than or equal to array size
        d = d % n;

        // Step 1: Reverse first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Step 2: Reverse remaining n - d elements
        reverse(arr.begin() + d, arr.end());

        // Step 3: Reverse the whole array
        reverse(arr.begin(), arr.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna