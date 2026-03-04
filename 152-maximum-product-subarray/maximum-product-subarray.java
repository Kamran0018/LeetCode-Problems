class Solution {
    public int maxProduct(int[] nums) {
            int max=0;


            if(nums.length==1 && nums[0]<0){
                return nums[0];
            }

        for(int i=0;i<nums.length;i++){

            int s=1;

            for(int j=i;j<nums.length;j++){
                s*=nums[j];
                max=Math.max(max,s);
            }

        }
        return max;
        
    }
}