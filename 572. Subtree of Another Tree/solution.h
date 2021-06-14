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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
           return false;
        if(PreOrderTraverse(root, subRoot))
            return true;
        return (isSubtree(root -> left, subRoot) || isSubtree(root -> right, subRoot));
    }
    
    bool PreOrderTraverse(TreeNode* root, TreeNode* subRoot)
    {
        if(!root && !subRoot)
            return true;
        else if(!root || !subRoot)
            return false;
        return (root->val==subRoot->val and PreOrderTraverse(root->left,subRoot->left)
                and PreOrderTraverse(root->right,subRoot->right));
    }
};