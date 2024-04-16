// problem link
// https://leetcode.com/problems/power-of-two/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0 || n == -2147483648)
            return false;

        if((n & (n-1)) != 0){
            return false;
        }else{
            return true;
        }

    }
};
