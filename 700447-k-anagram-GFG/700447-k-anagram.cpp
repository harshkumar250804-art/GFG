class Solution {
  public:
    bool areKAnagrams(string &s1, string &s2, int k) {
        
        if (s1.length() != s2.length()) {
            return false;
        }

        
        vector<int> freq(26, 0);
        for (char c : s1) {
            freq[c - 'a']++;
        }

       
        int count = 0;
        for (char c : s2) {
            if (freq[c - 'a'] > 0) {
                freq[c - 'a']--;
            } else {
                count++;
            }
        }

       
        return count <= k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna