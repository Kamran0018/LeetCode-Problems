class Solution {
public:
    int maximumGap(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int max=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int difference=nums[i+1]-nums[i];
            if(max<difference)
            {
                max=difference;
            } 
        }
        if(nums.size()<2)
        {
            return 0;
        }
        else
        {
            return max;
        }
        
    }
};