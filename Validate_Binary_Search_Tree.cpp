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
    bool p=true;
    long long k=LONG_MIN;
    void solve(TreeNode* root){
        if(root==NULL) return;
        solve(root->left);
        if(p==false||root->val<=k){
            p=false;
            //cout<<p<<endl;
            return;
        }
        else{
            k=root->val;
            //cout<<p<<endl;
        }
        solve(root->right);
        return;


    }
    bool isValidBST(TreeNode* root) {
        
        solve(root);
        return p;
    }
};

//Link:-https://leetcode.com/problems/validate-binary-search-tree/
