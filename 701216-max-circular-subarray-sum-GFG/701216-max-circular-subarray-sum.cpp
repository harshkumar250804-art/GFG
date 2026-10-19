class Solution {
public:
    int maxCircularSum(vector<int> &arr) {
        int totalSum = 0;
        int maxSum = arr[0], currentMax = 0;
        int minSum = arr[0], currentMin = 0;

        for (int num : arr) {
            totalSum += num;

            
            currentMax = max(num, currentMax + num);
            maxSum = max(maxSum, currentMax);

            
            currentMin = min(num, currentMin + num);
            minSum = min(minSum, currentMin);
        }

        
        if (maxSum < 0) {
            return maxSum;
        }

       
        return max(maxSum, totalSum - minSum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna