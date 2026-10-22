class Solution {
  public:
    vector<int> diffArray(vector<int>& arr, vector<vector<int>>& opr) {
        int n = arr.size();
        vector<int> diff(n + 1, 0);

       
        for (const auto& op : opr) {
            int l = op[0];
            int r = op[1];
            int v = op[2];

            diff[l] += v;
            if (r + 1 < n) {
                diff[r + 1] -= v;
            }
        }

        
        int current_sum = 0;
        for (int i = 0; i < n; i++) {
            current_sum += diff[i];
            arr[i] += current_sum;
        }

        return arr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna