class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int s=n+m;
        vector<int>nums3(s);
        for(int i=0;i<m;i++)
        {
            nums3[i]=nums1[i];
        }
        for(int j=0;j<n;j++)
        {
            nums3[m+j]=nums2[j];
        }
        sort(nums3.begin(),nums3.end());
        if(s%2==0)
        {
            return (nums3[s/2]+nums3[(s/2)-1])/2.0;
        }
        else
        {
            return nums3[s/2];
        }    
    }
};