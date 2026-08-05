class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int j=1;
       for(int i=0,j=1;i<nums.size(),j<nums.size();i++,j++){
            if(nums[i]==nums[j]){
                return true;
            }
            
       }
       return 0;
    }
};