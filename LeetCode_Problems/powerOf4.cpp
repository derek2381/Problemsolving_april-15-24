// problem link
// https://leetcode.com/problems/power-of-four/

class Solution {
public:
    bool isPowerOfFour(int n) {
        unsigned int val = n;

        while(val >= 2){
            if(val % 4 == 0){
                val /= 4;
            }else{
                break;
            }
        }

        if(val == 1){
            return true;
        }else{
            return false;
        }

    }
};
