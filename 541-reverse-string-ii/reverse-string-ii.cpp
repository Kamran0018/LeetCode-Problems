class Solution {
public:
    string reverseStr(string s, int k) {

        for (int i = 0; i < s.length(); i += 2 * k) {

            int p1 = i;
            int p2 = min(i + k - 1, (int)s.length() - 1);

            while (p1 < p2) {
                swap(s[p1], s[p2]);
                p1++;
                p2--;
            }
        }

        return s;
    }
};
