class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1;
        int right=1;
        vector<int> result(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            result[i]=left;
            left=left*nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            result[i]=result[i]*right;
            right=right*nums[i];
        }
        return result;
        
        
    }
};