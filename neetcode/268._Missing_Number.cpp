// easy 
// Approach with Xor 
/*
Rules 
a^a = 0
a^0 = a
*/

// Xor with two arrays left out will be the missing one 

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // xor
        int res=nums.size();
        for(int i =0;i<nums.size();i++){
            res^=nums[i];
            res^=i;
        }
        return res;
    }
};