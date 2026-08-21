class Solution {
public:
    void backtrack(std::vector<int>& candidates, int target,
                   std::vector<std::vector<int>>& result,
                   std::vector<int>& current_combination, int start_index) {
        if (target == 0) {
            result.push_back(current_combination);
            return;
        }

        for (int i = start_index; i < candidates.size(); ++i) {
            if (candidates[i] > target) {
                break;
            }

            current_combination.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], result,
                      current_combination, i);
            current_combination.pop_back();
        }
    }

    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates,
                                                 int target) {
        std::vector<std::vector<int>> result;
        std::vector<int> current_combination;

        std::sort(candidates.begin(), candidates.end());

        backtrack(candidates, target, result, current_combination, 0);
        return result;
    }
};
