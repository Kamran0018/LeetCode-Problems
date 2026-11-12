class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string w;
        int count=0;
        while(ss>>w)
        {
            count++;
        }
        return count;

        
    }
};