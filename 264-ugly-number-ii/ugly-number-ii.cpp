class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> ugly(n);

        ugly[0] = 1;

        int p2 = 0, p3 = 0, p5 = 0;

        for (int i = 1; i < n; i++) {
            int a = ugly[p2] * 2;
            int b = ugly[p3] * 3;
            int c = ugly[p5] * 5;

            ugly[i] = min(a, min(b, c));

            if (ugly[i] == a) p2++;
            if (ugly[i] == b) p3++;
            if (ugly[i] == c) p5++;
        }

        return ugly[n - 1];
    }
};