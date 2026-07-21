class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s=0;
        for(int i=0;i<k;i++)
        {
            s=s+nums[i];
        }
        double max_sum=s;
        for(int i=k;i<nums.size();i++)
        {
            s=s+nums[i]-nums[i-k];
            max_sum=max(max_sum,s);
        }
        return max_sum/k;
        
    }
};