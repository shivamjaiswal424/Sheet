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
void pusher(TreeNode* root,vector<vector<int>>&ans,int level){
    if(root==NULL) return;
    if(ans.size()<level+1){
        vector<int>v;
        v.push_back(root->val);
        ans.push_back(v);
    }
    else{
        if(level%2){
            ans[level].push_back(root->val);
        }
        else{
            ans[level].push_back(root->val);
        }
    }
    pusher(root->left,ans,level+1);
    pusher(root->right,ans,level+1);
    return;
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        pusher(root,ans,0);
        for(int i=1;i<ans.size();i+=2){
            reverse(ans[i].begin(),ans[i].end());
        }
        return ans;
        
    }
};

//Link:-https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/