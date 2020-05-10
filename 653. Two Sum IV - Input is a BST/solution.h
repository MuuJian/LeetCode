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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> s;
        return helper(root, s, k);
    }
    
    bool helper(TreeNode* root, unordered_set<int>& s, int target)
    {
        if(root == NULL) return false;
        if(s.count(target - root -> val)) return true;
        s.insert(root -> val);
        return helper(root -> left, s, target) || helper(root -> right, s, target);
    }
};




/*
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        unordered_map<int, int> m;
        vector<int> v;
        PreTraverse(root, v);
        
        for(int a = 0; a < v.size(); ++a)
		{
			m[v[a]] = a;
		}
		
		for(int a = 0; a < v.size(); ++a)
		{
			if(m.count(k - v[a]) && (m[k - v[a]] != a))
			{
				return true;
			}
		}
		return false;
    }
    
    void PreTraverse(TreeNode* root, vector<int>& v)
    {
        if(root != NULL)
        {
            v.push_back(root -> val);
            PreTraverse(root -> left, v);
            PreTraverse(root -> right, v);
        }
    }
};
*/


/*
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL) return false;
        vector<int> v;
        InTraverse(root, v);
        for(int i = 0, j = static_cast<int>(v.size() - 1); i < j;)
        {
            if (v[i] + v[j] == k) return true;
            (v[i] + v[j] > k) ? --j : ++i;
        }
        return false;
    }
    
    void InTraverse(TreeNode* root, vector<int>& v)
    {
        if(root != NULL)
        {
            InTraverse(root -> left, v);
            v.push_back(root -> val);
            InTraverse(root -> right, v);
        }
    }
};
*/