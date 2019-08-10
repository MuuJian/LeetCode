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
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        return helper(cbegin(pre),cend(pre),cbegin(post),cend(post));
    }
    
    typedef vector<int>::const_iterator VIT;
    
    TreeNode* helper(VIT pre_l,VIT pre_r,VIT post_l,VIT post_r)
    {
        if(pre_l == pre_r)  return nullptr;
        TreeNode* root = new TreeNode(*pre_l);
        ++pre_l;
        --post_r;
        if(pre_l == pre_r) return root;
        VIT post_m = next(find(post_l,post_r,*pre_l));
        VIT pre_m = pre_l + (post_m - post_l);
        root->left = helper(pre_l,pre_m,post_l,post_m);
        root->right = helper(pre_m,pre_r,post_m,post_r);
        return root;
    }
};

/*
https://zxi.mytechroad.com/blog/tree/leetcode-889-construct-binary-tree-from-preorder-and-postorder-traversal/
*/