// problem link
// https://leetcode.com/problems/binary-prefix-divisible-by-5/

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> res;
        long long k = nums.size()-1, total_val = 0;
        for(int i : nums){

            total_val = ((total_val*2) + i) % 5;
            if(total_val == 0){
                res.push_back(true);
            }else{
                res.push_back(false);
            }
        }

        return res;

    }
};
