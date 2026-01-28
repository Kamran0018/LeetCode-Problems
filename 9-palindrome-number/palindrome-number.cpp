class Solution {
public:
    bool isPalindrome(int x) {
        int s=0;
        long long int b=0;
        int temp=x;
        if(x<0)
        {
            return false;
        }
        for(int i=x;i>0;i/=10)
        {
            s=i%10;
            b=b*10+s;
        }
        if(temp==b)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};