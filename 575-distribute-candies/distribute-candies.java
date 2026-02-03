class Solution {
    public int distributeCandies(int[] candyType) {
        int s=candyType.length;

        HashSet<Integer> set = new HashSet<>();

        for (int i : candyType) {
            set.add(i);
        }

        return Math.min(set.size(),s/2);
        
    }
}