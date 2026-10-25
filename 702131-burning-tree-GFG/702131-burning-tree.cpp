class Solution {
public:
    int minTime(Node* root, int target) {
        if (!root) return 0;

        unordered_map<Node*, Node*> parentMap;
        Node* targetNode = nullptr;

        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();

            if (curr->data == target) {
                targetNode = curr;
            }

            if (curr->left) {
                parentMap[curr->left] = curr;
                q.push(curr->left);
            }
            if (curr->right) {
                parentMap[curr->right] = curr;
                q.push(curr->right);
            }
        }

        
        unordered_set<Node*> visited;
        queue<Node*> burnQueue;

        burnQueue.push(targetNode);
        visited.insert(targetNode);

        int time = 0;

        while (!burnQueue.empty()) {
            int size = burnQueue.size();
            bool flag = false; 

            for (int i = 0; i < size; i++) {
                Node* curr = burnQueue.front();
                burnQueue.pop();

                
                if (curr->left && visited.find(curr->left) == visited.end()) {
                    flag = true;
                    visited.insert(curr->left);
                    burnQueue.push(curr->left);
                }

                
                if (curr->right && visited.find(curr->right) == visited.end()) {
                    flag = true;
                    visited.insert(curr->right);
                    burnQueue.push(curr->right);
                }

                if (parentMap.find(curr) != parentMap.end() && visited.find(parentMap[curr]) == visited.end()) {
                    flag = true;
                    visited.insert(parentMap[curr]);
                    burnQueue.push(parentMap[curr]);
                }
            }

            if (flag) {
                time++;
            }
        }

        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna