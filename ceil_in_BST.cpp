int findCeil(Node* root, int i) {
    if (root == NULL) return -1;
    
    int a=root->data;
    while(root!=NULL){
        
        if(root->data==i){
            return a;
        }
        if(root->data>i){
            root=root->left;
            
        }
        else{
            root=root->right;
        }
        if(root && a<i && root->data>=a){
            a=root->data;
        }
        else if(root && root->data<a && root->data>=i){
            a=root->data;
        }
        //cout<<a<<endl;
    }
    if(a<i) return -1;
    return a;

//Link:-https://practice.geeksforgeeks.org/problems/implementing-ceil-in-bst/1
