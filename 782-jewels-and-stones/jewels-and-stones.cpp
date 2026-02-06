#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> st;
        for(char c : jewels) {
            st.insert(c);
        }
        int ans = 0;
        for(char c : stones) {
            if(st.count(c)) {
                ans++;
            }
        }
        return ans;
    }
};
