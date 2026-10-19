class Solution {
  public:
    int minChar(string& s) {
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());

        string temp = s + "$" + rev_s;
        int n = temp.length();

        vector<int> lps(n, 0);
        int len = 0;
        int i = 1;

        while (i < n) {
            if (temp[i] == temp[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        return s.length() - lps.back();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna