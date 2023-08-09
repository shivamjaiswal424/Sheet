 bool solve(int n, vector<int>& arr, int k,int ind,int sum){
        if(ind==n){
            if(sum==k){
                
                return true;
            }
            else{
                return false;
            }
        }
        if(sum>k) return false;
       
        if(solve(n,arr,k,ind+1,sum+arr[ind])){
            return true;
        }
        if( solve(n,arr,k,ind+1,sum)){
            return true;
        }
       
        return false;
        
    }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        return solve(n,arr,k,0,0);
       
    }

//Link:-https://practice.geeksforgeeks.org/problems/check-if-there-exists-a-subsequence-with-sum-k/1
