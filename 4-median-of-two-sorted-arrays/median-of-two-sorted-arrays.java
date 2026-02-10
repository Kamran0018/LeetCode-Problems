import java.util.*;
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int x = m + n;
        int[] merge = new int[x];
        for (int i = 0; i < m; i++) {
            merge[i] = nums1[i];
        }
        for (int j = 0; j < n; j++) {
            merge[m + j] = nums2[j];
        }
        Arrays.sort(merge);
        if (x % 2 != 0) {
            return merge[x / 2]; 
        } else {
            return (merge[x / 2] + merge[(x / 2) - 1]) / 2.0;
        }
    }
}
