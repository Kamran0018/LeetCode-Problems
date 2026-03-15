class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int> first, count;
        int degree = 0, ans = nums.size();

        for(int i = 0; i < nums.size(); i++){
            if(first.count(nums[i]) == 0) first[nums[i]] = i;
            count[nums[i]]++;

            if(count[nums[i]] > degree){
                degree = count[nums[i]];
                ans = i - first[nums[i]] + 1;
            }
            else if(count[nums[i]] == degree){
                ans = min(ans, i - first[nums[i]] + 1);
            }
        }

        return ans;
    }
};