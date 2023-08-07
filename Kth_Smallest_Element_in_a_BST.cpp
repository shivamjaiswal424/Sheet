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
    int ans=0;
    
    TreeNode* inorder(TreeNode* root, int k){
        if(root==NULL) return NULL;
        
        TreeNode* left=inorder(root->left,k);
        if(left!=NULL){
            return left;
        }
        k--;
        cout<<k<<" "<<root->val<<endl;
        if(k==0){
            ans=root->val;
            return root;
        } 

        return inorder(root->right,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* temp=inorder(root,k);
        return ans;
    }
};
//Link:-https://leetcode.com/problems/kth-smallest-element-in-a-bst/
