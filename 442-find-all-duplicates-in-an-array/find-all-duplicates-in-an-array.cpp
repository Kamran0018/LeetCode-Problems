class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(st.count(nums[i]))
            {
                ans.push_back(nums[i]);
            }
            st.insert(nums[i]);
        }
        return ans;    
    }
};

// sort(nums.begin(),nums.end());
        // vector<int>ans;
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         ans.push_back(nums[i]);
        //     }
        // }

        // return ans;