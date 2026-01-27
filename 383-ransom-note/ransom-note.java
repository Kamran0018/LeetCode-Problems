class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {

        int []freq=new int[26];
        for(int i=0;i<magazine.length();i++)
        {
            freq[magazine.charAt(i)-'a']++;
            //0 1 2 3 4 5
        }
        for (int i = 0; i < ransomNote.length(); i++) {
            char c = ransomNote.charAt(i);
            if (freq[c - 'a'] == 0)
            return false;
            freq[c - 'a']--;
        }
        return true;
    }
}

// class Solution {
//     public boolean canConstruct(String ransomNote, String magazine) {
//         char[] a =ransomNote.toCharArray();
//         char[] b =magazine.toCharArray();

//         for(int i=0;i<a.length;i++)
//         {
//             boolean found=false;
//             for(int j=0;j<b.length;j++)
//             {
//                 if(a[i]==b[j])
//                 {
//                     b[j]='*';
//                     found=true;
//                     break;
//                 }
//             }
//             if(!found)
//             {
//                 return false;
//             }
//         }
//         return true;
        

    
        
//     }
// }