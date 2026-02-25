class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int p1=0;
        int p2=nums.size()-1;
        int first=-1;
        int last=-1;
        while(p1<=p2)
        {
            int mid=(p1+p2)/2;
            if(nums[mid]==target)
            {
                first=mid;
                p2=mid-1;
            }
            else if(nums[mid]<target)
            {
                p1=mid+1;
            }
            else
            {
                p2=mid-1;;
            }
        }
        p1=0;
        p2=nums.size()-1;
        while(p1<=p2)
        {
            int mid=(p1+p2)/2;
            if(nums[mid]==target)
            {
                last=mid;
                p1=mid+1;
            }
            else if(nums[mid]<target)
            {
                p1=mid+1;
            }
            else
            {
                p2=mid-1;
            }
        }
        return{first,last};  
    }
};