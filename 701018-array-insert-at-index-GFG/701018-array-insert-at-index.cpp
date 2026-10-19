class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // Use vector's insert method to insert val at the given index
        arr.insert(arr.begin() + index, val);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna