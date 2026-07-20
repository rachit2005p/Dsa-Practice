/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  private:
    int result = -1;

    void inorder(Node* root, int &k) {
        if (!root || k <= 0) return;

        // Traverse left subtree
        inorder(root->left, k);

        // Process current node
        k--;
        if (k == 0) {
            result = root->data;
            return;
        }

        // Traverse right subtree
        inorder(root->right, k);
    }

  public:
    int kthSmallest(Node *root, int k) {
        result = -1;
        inorder(root, k);
        return result;
    }
};