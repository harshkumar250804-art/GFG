class Solution {
public:
    string chooseSwap(string &s) {
        set<char> st(s.begin(), s.end());

        char ch1 = '#', ch2 = '#';

        for (int i = 0; i < s.length(); i++) {
          
            st.erase(s[i]);

           
            if (!st.empty()) {
                char smallest = *st.begin();
                if (smallest < s[i]) {
                    ch1 = s[i];
                    ch2 = smallest;
                    break; 
                }
            }
        }

        
        if (ch1 != '#') {
            for (int i = 0; i < s.length(); i++) {
                if (s[i] == ch1) {
                    s[i] = ch2;
                } else if (s[i] == ch2) {
                    s[i] = ch1;
                }
            }
        }

        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna