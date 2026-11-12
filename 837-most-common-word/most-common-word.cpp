class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {

        for(char &ch : paragraph) {
            if(isalpha(ch))
                ch = tolower(ch);
            else
                ch = ' ';
        }

        stringstream ss(paragraph);
        unordered_map<string, int> mp;
        string word;

        while(ss >> word) {

            bool found = false;

            for(int i = 0; i < banned.size(); i++) {
                if(banned[i] == word) {
                    found = true;
                    break;
                }
            }

            if(found)
                continue;

            mp[word]++;
        }

        string ans;
        int max1 = 0;

        for(auto i : mp) {
            if(i.second > max1) {
                max1 = i.second;
                ans = i.first;
            }
        }

        return ans;
    }
};