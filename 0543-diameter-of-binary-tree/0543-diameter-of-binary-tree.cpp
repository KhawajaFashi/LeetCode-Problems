/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int max = 0;
        diameter(root, max);
        return max;
    }
    int diameter(TreeNode* root, int& maxi) {
        if (root == NULL)
            return 0;
        int l_height = diameter(root->left, maxi);
        int r_height = diameter(root->right, maxi);
        maxi = max(maxi, l_height + r_height);
        return max(r_height, l_height) + 1;
    }

    // pair<int, int> diameterOfBinary(TreeNode* root) {
    //     if (!root) {
    //         pair<int, int> p = make_pair(0, 0);
    //         return p;
    //     }
    //     pair<int, int> left = diameterOfBinary(root->left);
    //     pair<int, int> right = diameterOfBinary(root->right);
    //     int op1 = left.first;
    //     int op2 = right.first;
    //     int op3 = left.second + right.second;
    //     pair<int, int> ans;
    //     ans.first = max(op1, max(op2, op3));
    //     ans.second = max(left.second, right.second) + 1;
    //     return ans;
    // }
    // int diameterOfBinaryTree(TreeNode* root) {
    //     return diameterOfBinary(root).first;
    // }
};