// approach - math
// take 2 sum of arrays and subtract  

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sum
        int sum=0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
        int sum1=nums.size()*(nums.size()+1)/2 ;  
        if (sum1-sum) return sum1-sum;
        return 0;
    }
};
