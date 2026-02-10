class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum_of_T = 0;
        int sum_of_S = 0;

        for(int i = 0; i < t.length(); i++) {
            sum_of_T = sum_of_T + t[i];
        }

        for(int i = 0; i < s.length(); i++) {
            sum_of_S = sum_of_S + s[i];
        }
        return char(sum_of_T - sum_of_S);
    }
};
