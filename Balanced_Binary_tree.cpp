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
    int maxDepth(TreeNode* root) {
        if(root==NULL) return 0;
        int l=maxDepth(root->left);
        if(l==-1) return -1;
        int r=maxDepth(root->right);
        if(r==-1) return -1;
        if(abs(l-r)>1) return -1;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        return maxDepth(root)!=-1;
        
    }
};

//Link-https://leetcode.com/problems/balanced-binary-tree/