int floor(Node* root, int x) {
    int a=root->data;
    while(root!=NULL){
        if(root->data==x) return root->data;
        if(root->data<x){
            root=root->right;
        }
        else{
            root=root->left;
        }
        
        if(root!=NULL && root->data<=a && a>x){
            a=root->data;
        }
        else if(root!=NULL && root->data>a && x>=root->data){
            a=root->data;
        }
        
    }
    //cout<<a<<endl;
    if(a>x) return -1;
    return a;
    
}

//Link:-https://practice.geeksforgeeks.org/problems/floor-in-bst/1