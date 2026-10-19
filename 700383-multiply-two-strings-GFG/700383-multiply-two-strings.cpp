class Solution {
public:
    string multiplyStrings(string &s1, string &s2) {
       
        bool isNegative = false;

        if (s1[0] == '-') {
            isNegative = !isNegative;
            s1 = s1.substr(1);
        }
        if (s2[0] == '-') {
            isNegative = !isNegative;
            s2 = s2.substr(1);
        }

        
        int i = 0;
        while (i < s1.length() && s1[i] == '0') i++;
        s1 = (i == s1.length()) ? "0" : s1.substr(i);

        int j = 0;
        while (j < s2.length() && s2[j] == '0') j++;
        s2 = (j == s2.length()) ? "0" : s2.substr(j);

        
        if (s1 == "0" || s2 == "0") return "0";

        int n = s1.size();
        int m = s2.size();
        vector<int> result(n + m, 0);

        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (s1[i] - '0') * (s2[j] - '0');
                int sum = mul + result[i + j + 1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

       
        string ans = "";
        int k = 0;
        while (k < result.size() && result[k] == 0) k++; 

        while (k < result.size()) {
            ans += to_string(result[k++]);
        }

        return isNegative ? "-" + ans : ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna