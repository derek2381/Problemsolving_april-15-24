// problem link
// https://leetcode.com/problems/convert-a-number-to-hexadecimal/

class Solution {
public:
    string toHex(int num) {
        if(num == 0)
            return "0";
        unsigned int n = num;
        int rem = 0;
        string str = "0123456789abcdef";
        string res = "";

        while(n > 0){
            rem = n % 16;
            res += str[rem];
            n /= 16;
        }

        reverse(res.begin(), res.end());
        return res;

    }
};
