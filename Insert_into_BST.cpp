class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL) return new TreeNode(val);
        TreeNode *temp=root;
        while(root){
            if(root->val<val && root->right){
                root=root->right;
            }
            else if(root->val>val && root->left){
                root=root->left;
            }
            else{
                break;
            }
        }
        if(root->val>val){
            root->left= new TreeNode(val);
            return temp;
        }
        root->right=new TreeNode(val);
        return temp;
        
    }
};

//Link:-https://leetcode.com/problems/insert-into-a-binary-search-tree/