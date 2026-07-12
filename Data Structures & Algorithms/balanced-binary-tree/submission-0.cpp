/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int left = balanced(root -> left);
        int right = balanced(root -> right);
        if(abs(left - right) > 1) return false;
        return isBalanced(root -> left) && isBalanced(root -> right);
    }

    int balanced(TreeNode* root ){
        if(!root) return 0;
        return 1 + max(balanced(root -> left) , balanced(root -> right));
    }
};
