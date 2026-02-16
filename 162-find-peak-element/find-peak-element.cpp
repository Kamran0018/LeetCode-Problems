class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index;
        int p1=0;
        int p2=nums.size()-1;

        while(p1<p2)
        {
            int mid=(p1+p2)/2;
            if(nums[mid]>nums[mid+1])
            {
                p2=mid;
            }
            else
            {
                p1=mid+1;
            }
        }
        return p1;
        
    }
};