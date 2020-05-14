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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return Helper(preorder, 0, preorder.size());
    }
    
    TreeNode* Helper(vector<int>& preorder, int start, int end)
    {
        if(start >= end)
            return nullptr;
        TreeNode* node = new TreeNode(preorder[start]);
        int spiltnum = start;
        while(spiltnum < end && preorder[spiltnum] <= preorder[start])
            ++spiltnum;
        cout << spiltnum << " ";
        node -> left = Helper(preorder, start + 1, spiltnum);
        node -> right = Helper(preorder, spiltnum, end);
        return node;
    }
};