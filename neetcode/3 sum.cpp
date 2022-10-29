// 3 Sum 

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>vec;
        int n =nums.size();
        sort(nums.begin(),nums.end());
        for(int i =0;i<n;i++){
            if (i!=0 && nums[i]==nums[i-1]) continue;
            int target=0-nums[i];
            int left = i+1 ,right = n-1;
            while(left<right){
                if  (nums[left] + nums[right] == target){
                    vec.push_back({nums[left],nums[right],nums[i]});
                    left++;
                    while(nums[left]==nums[left-1] && left <right) 
                }
                else if (nums[left] + nums[right] >= target)
                      right --;
                else
                    left++;
            }
        }
        return vec;
    }
}; 

 