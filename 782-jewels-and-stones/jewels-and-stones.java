class Solution {
    public int numJewelsInStones(String jewels, String stones) {
    HashSet<Character> st = new HashSet<>();

    int count=0;
    char[] a1=jewels.toCharArray();
    char[] a2=stones.toCharArray();

    for(char x:a1)
    {
        st.add(x);
    }

    for(char x2:a2)
    {
        if(st.contains(x2))
        {
            count++;
        }
    }

    return count;


        
    }
}