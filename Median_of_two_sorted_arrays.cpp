class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums2.size()<nums1.size()) return findMedianSortedArrays(nums2,nums1);
        int n=nums1.size();
        int m=nums2.size();
        int low=0,high=n;
        while(low<=high){
            int cut1=(low+high)>>1;
            int cut2=(n+m+1)/2-cut1;
            int l1,l2,r1,r2;
            if(cut1!=0){
                l1=nums1[cut1-1];
            }
            else{
                l1=INT_MIN;
            }

            if(cut2!=0){
                l2=nums2[cut2-1];
            }
            else{
                l2=INT_MIN;
            }
            if(cut1!=n){
                r1=nums1[cut1];
            }
            else{
                r1=INT_MAX;
            }
            if(cut2!=m){
                r2=nums2[cut2];
            }
            else{
                r2=INT_MAX;
            }
            if(l1<=r2 && l2<=r1){
                if((n+m)%2==0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else{
                    return max(l1,l2);
                }
            }
            else if(l1>r2){
                high=cut1-1;
            }
            else{
                low=cut1+1;
            }
        }
        return 0.0;
    }
};

//Link:-https://leetcode.com/problems/median-of-two-sorted-arrays/description/