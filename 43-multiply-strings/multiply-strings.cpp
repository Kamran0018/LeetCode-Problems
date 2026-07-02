class Solution {
public:
    string multiply(string num1, string num2) {

        if (num1 == "0" || num2 == "0")
            return "0";

        vector<int> ans(num1.size() + num2.size(), 0);

        for (int i = num1.size() - 1; i >= 0; i--) {
            for (int j = num2.size() - 1; j >= 0; j--) {

                int mul = (num1[i] - '0') * (num2[j] - '0');

                int pos1 = i + j;
                int pos2 = i + j + 1;

                int sum = mul + ans[pos2];

                ans[pos2] = sum % 10;
                ans[pos1] += sum / 10;
            }
        }

        string result = "";

        for (int x : ans) {
            if (!(result.empty() && x == 0))
                result += to_string(x);
        }

        return result;
    }
};