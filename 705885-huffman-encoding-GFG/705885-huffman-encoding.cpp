struct Node {
    int freq;
    int minIndex; 
    Node* left;
    Node* right;

    Node(int f, int idx) : freq(f), minIndex(idx), left(nullptr), right(nullptr) {}
    Node(int f, int idx, Node* l, Node* r) : freq(f), minIndex(idx), left(l), right(r) {}
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        if (a->freq != b->freq) {
            return a->freq > b->freq; 
        }
        return a->minIndex > b->minIndex; 
    }
};

class Solution {
private:
    void generateCodes(Node* root, string currentCode, vector<string>& result) {
        if (!root) return;

        
        if (!root->left && !root->right) {
            result.push_back(currentCode);
            return;
        }

        generateCodes(root->left, currentCode + "0", result);
        generateCodes(root->right, currentCode + "1", result);
    }

public:
    vector<string> huffmanCodes(string &s, vector<int> f) {
        int n = s.length();
        priority_queue<Node*, vector<Node*>, Compare> pq;

        
        for (int i = 0; i < n; ++i) {
            pq.push(new Node(f[i], i));
        }

        
        if (n == 1) {
            return {"0"};
        }

       
        while (pq.size() > 1) {
            Node* left = pq.top();
            pq.pop();

            Node* right = pq.top();
            pq.pop();

            int parentFreq = left->freq + right->freq;
            int parentMinIdx = min(left->minIndex, right->minIndex);

            Node* parent = new Node(parentFreq, parentMinIdx, left, right);
            pq.push(parent);
        }

        
        vector<string> result;
        Node* root = pq.top();
        generateCodes(root, "", result);

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna