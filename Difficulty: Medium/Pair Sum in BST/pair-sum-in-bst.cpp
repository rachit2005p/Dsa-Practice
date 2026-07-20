/*
Node is as follows
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  private:
    bool dfs(Node* root, int target, unordered_set<int>& st) {
        if (root == NULL) return false;
        
        // Check if complement exists in set
        if (st.count(target - root->data)) return true;
        
        st.insert(root->data);
        
        // Search left and right subtrees
        return dfs(root->left, target, st) || dfs(root->right, target, st);
    }

  public:
    bool findTarget(Node *root, int target) {
        unordered_set<int> st;
        return dfs(root, target, st);
    }
};