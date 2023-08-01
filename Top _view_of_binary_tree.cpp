class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
   
    vector<int> topView(Node *root)
    {   
        vector<int>ans;
        queue<pair<Node *,int>>q;
        map<int,int>m;
        Node* temp=NULL;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            if(m.find(it.second)==m.end()){
                m[it.second]=it.first->data;
            }
            if(it.first->left){
                q.push({it.first->left,it.second-1});
            }
            if(it.first->right){
                q.push({it.first->right,it.second+1});
            }
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        
        return ans;
        
        
    }

};

//Link:-https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1