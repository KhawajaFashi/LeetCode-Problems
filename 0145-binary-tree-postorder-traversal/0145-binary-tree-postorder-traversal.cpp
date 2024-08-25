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
    // vector<int> arr;
    // vector<int> postorderTraversal(TreeNode* root) {
    //     if (root == NULL)
    //         return arr;
    //     if (root->left == NULL && root->right == NULL) {
    //         arr.push_back(root->val);
    //         return arr;
    //     }
    //     arr = postorderTraversal(root->left);
    //     arr = postorderTraversal(root->right);
    //     arr.push_back(root->val);
    //     return arr;
    // }

    vector<int> p;
    void get(TreeNode* root) {
        if (!root)
            return;
        get(root->left);
        get(root->right);
        p.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        get(root);
        return p;

        //  if you like my approach then please UpVOTE o((>ω< ))o
    }
};