class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int pivot = -1;

        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                pivot = i;
                break;
            }
        }

        
        if (pivot != -1) {
            for (int i = n - 1; i > pivot; i--) {
                if (arr[i] > arr[pivot]) {
                    swap(arr[i], arr[pivot]);
                    break;
                }
            }
        }

       
        reverse(arr.begin() + pivot + 1, arr.end());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna