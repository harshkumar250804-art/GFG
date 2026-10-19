#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
       
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());

        int i = 0, j = 0, k = 0;
        int n1 = a.size(), n2 = b.size(), n3 = c.size();

        int min_diff = INT_MAX;
        int min_sum = INT_MAX;
        vector<int> result(3);

        
        while (i < n1 && j < n2 && k < n3) {
            int current_min = min({a[i], b[j], c[k]});
            int current_max = max({a[i], b[j], c[k]});
            int current_diff = current_max - current_min;
            int current_sum = a[i] + b[j] + c[k];

            
            if (current_diff < min_diff || (current_diff == min_diff && current_sum < min_sum)) {
                min_diff = current_diff;
                min_sum = current_sum;
                result = {a[i], b[j], c[k]};
            }

            
            if (current_min == a[i]) {
                i++;
            } else if (current_min == b[j]) {
                j++;
            } else {
                k++;
            }
        }

        
        sort(result.rbegin(), result.rend());
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna