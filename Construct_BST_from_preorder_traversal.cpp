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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        stack<TreeNode*>st;
        int i=0;
        TreeNode* root=new TreeNode(preorder[0]);
        int n=preorder.size();
        i++;
        st.push(root);
        TreeNode* curr=root;
        while(i<n){
            TreeNode* temp=new TreeNode(preorder[i++]);
            if(temp->val<st.top()->val){
                st.top()->left=temp;
            }
            else{
                TreeNode* b;
                while(!st.empty()&&st.top()->val<temp->val){
                    b=st.top();
                    st.pop();
                }
                b->right=temp;
            }
            st.push(temp);
            curr=temp;
        }
        return root;
    }
};
//Link:-https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/
