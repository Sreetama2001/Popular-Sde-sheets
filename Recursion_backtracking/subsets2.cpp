// subsets 2 with duplicates 

// 1 2 2 3 

/*
choose 1     --- pop 1                                     not choose 1 i.e  choose 2             not choose 2 i.e choose 3            not choose 3 choose null
                                                           choose 2 2    pop 2     2 3            index can't move  pop 3 (index =2)    // we push the [] into vector at the beggining
choose 1 2   --- pop 2  get 1 3  pop 3                                                            push [3] and then pop 3 
                                                           choose 2 2 3  pop 3                    // loop ends 
choose 1 2 2  --- pop 2 --- push 3  get 1 2 3 --- pop 3                                           // final loop ends 
                                                            end of loop 
choose 1 2 2 3  --- pop 3  
                                                        
end of the loop 

*/

class Solution {
    void generate(vector<vector<int>>&vec,vector<int>subset,vector<int>&nums,int indx){
        vec.push_back(subset);
        for(int i =indx;i< nums.size();i++){
            cout << " indx: "<<indx<< " i: "<<i;
        if (i == indx || nums[i] != nums[i - 1]){  
            subset.push_back(nums[i]);
            generate(vec,subset,nums,i+1);
            subset.pop_back();
        }
     }
        return ;
    } 
    // 1 2 2 3 
    // [1]    []
    // [1,2]      [1 ,3] 
   // [1,2,2]    [1,2,3] []
public:
    vector<vector<int>>subsetsWithDup(vector<int>& nums) {
      sort(nums.begin(),nums.end());  
      vector<vector<int>>vec;
      vector<int>subset;
      generate(vec,subset,nums,0);
      return vec;
    }
};