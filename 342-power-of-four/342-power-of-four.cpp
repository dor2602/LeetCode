class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n<=0)
            return false;
        while(n>=2)
        {
            if(n%4!=0) return false;
            n/=4;
        }
        return true;
    }
};