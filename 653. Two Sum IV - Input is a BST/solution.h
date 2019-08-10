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
    bool findTarget(TreeNode* root, int k) {
        queue<TreeNode*> q;
        unordered_set<int> res;
        if(root==NULL)
            return false;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* p = q.front();
            if(res.find(k-p->val) != res.end())
                return true;
            else
                res.insert(p->val);
            q.pop();
            if(p->left != NULL) q.push(p->left);
            if(p->right != NULL) q.push(p->right);
        }
        return false;
    }
    
};

auto gucciGang = []() {std::ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();
