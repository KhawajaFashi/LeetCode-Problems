/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (long((root->val - p->val)) * long((root->val - q->val)) > 0)
            root = p->val < root->val ? root->left : root->right;
        return root;
        // if (root->val > p->val && root->val > q->val)
        //     return lowestCommonAncestor(root->left, p, q);
        // else if (root->val < p->val && root->val < q->val)
        //     return lowestCommonAncestor(root->right, p, q);
        // else
        //     return root;
    }
};