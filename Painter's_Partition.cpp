class Solution
{
  public:
    int solve(long long mid,int k,int arr[],int n){
        int painter=1;
        long long board=0;
        for(int i=0;i<n;i++){
            if(arr[i]+board<=mid){
                board+=arr[i];
            }
            else{
                painter++;
                board=arr[i];
            }
        }
        return painter;
    }
    long long minTime(int arr[], int n, int k)
    {
        long long low=0;
        long long high=0;
        for(int i=0;i<n;i++){
            if(low<arr[i]){
                low=arr[i];
            }
            high+=arr[i];
        }
        //cout<<low<<" "<<high<<endl;
        while(low<=high){
            long long mid=(low+(high-low)/2);
            int a=solve(mid,k,arr,n);
            //cout<<mid<<endl;
            if(a>k){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};
//Link-https://practice.geeksforgeeks.org/problems/the-painters-partition-problem1535/1