class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {

        unordered_set<int> ans;
        unordered_set<int> curr;

        for (int x : arr) {

            unordered_set<int> next;
            next.insert(x);

            for (int val : curr) {
                next.insert(val | x);
            }

            curr = next;

            for (int val : curr) {
                ans.insert(val);
            }
        }

        return ans.size();
    }
};