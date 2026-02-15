class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        int totalProduct = 1;
        int zeroCount = 0;
        int[] arr = new int[nums.length];

        // Step 1: Calculate product of non-zero elements
        for (int x : nums) {
            if (x == 0) {
                zeroCount++;
            } else {
                totalProduct *= x;
            }
        }

        // Step 2: Build result array
        for (int i = 0; i < nums.length; i++) {

            if (zeroCount > 1) {
                arr[i] = 0;  // more than one zero
            }
            else if (zeroCount == 1) {
                if (nums[i] == 0) {
                    arr[i] = totalProduct;  // only zero position gets product
                } else {
                    arr[i] = 0;
                }
            }
            else {
                arr[i] = totalProduct / nums[i];  // normal case
            }
        }

        return arr;
    }
}
