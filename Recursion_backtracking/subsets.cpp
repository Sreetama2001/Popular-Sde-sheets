

class Solution {
    void generate(vector<vector<int>>&vec,vector<int>&subset,vector<int>&nums,int indx){
     vec.push_back(subset);//empty
         int j=indx;
        for(int j =indx;j<nums.size();j++){
         subset.push_back(nums[j]);
         cout<< " choosing "<<nums[j];
         generate(vec,subset,nums,j+1);
         cout<<" not choosing "<<subset.back()<<endl;
         subset.pop_back(); 
        }
        return ;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>vec;
        vector<int>subset;
        generate(vec,subset,nums,0);
        return vec;
    }
};