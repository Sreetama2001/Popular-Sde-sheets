//Two Sum 
// neetcode 75 problems 
//We need to find 2 numbers a, b so that a + b = target.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
        int n =nums.size();
        for(int i =0;i<n;i++){
            int numberToFind=target-nums[i];
            if(hash.find(numberToFind)!=hash.end()) 
                return {hash[numberToFind],i};
            hash[nums[i]]=i;
        }
        
        return {};
    }
};

// try 2 sum 2 after this 