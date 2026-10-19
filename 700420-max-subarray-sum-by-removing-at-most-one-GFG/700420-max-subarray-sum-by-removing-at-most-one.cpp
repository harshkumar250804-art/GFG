class Solution {
  public:
    int maxSumSubarray(vector<int>& arr) {
        int n = arr.size();

        int no_drop = arr[0];
        int one_drop = 0;
        int max_sum = arr[0];

        for (int i = 1; i < n; i++) {
          
            one_drop = max(no_drop, one_drop + arr[i]);

            
            no_drop = max(arr[i], no_drop + arr[i]);

            
            max_sum = max({max_sum, no_drop, one_drop});
        }

        return max_sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna