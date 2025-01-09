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
    int minDepth(TreeNode* root) {
        int dist = 0;
        if (!root)
            return dist;
        queue<TreeNode *> q;
        q.push(root);
        while (!q.empty())
        {
            dist++;
            int k = q.size();
            for (int i = 0; i < k; i++)
            {
                auto curr = q.front();
                q.pop();
                if (!curr->left && !curr->right)
                    return dist;
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
        }
        return 0;
        // if (!root)
        //     return 0;
        // int l_depth = minDepth(root->left);
        // int r_depth = minDepth(root->right);
        // return (min(l_depth, r_depth) ? min(l_depth, r_depth) : max(l_depth,
        // r_depth)) + 1;
    }
};