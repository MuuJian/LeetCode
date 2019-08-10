/*
使用层序遍历从右到左,最后一个结点就是最左的结点.
*/

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
    int findBottomLeftValue(TreeNode* root) {
       queue<TreeNode*> qtree;
        qtree.push(root);
        TreeNode* node;
        while(!qtree.empty())
        {
            node = qtree.front();
            qtree.pop();
            
            if(node->right!=NULL)
                qtree.push(node->right);
            if(node->left!=NULL)
                qtree.push(node->left);
        }
        return node->val;
    }
};