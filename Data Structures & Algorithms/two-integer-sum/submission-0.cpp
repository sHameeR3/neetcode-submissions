class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>p;
        for(int i=0;i<nums.size();i++){
            int c=target-nums[i];
            for(const auto &j : p){
                if(j.first==c){
                    return {j.second,i};
                }
            }
            p[nums[i]]=i;
        }
        return {};
        
    }
};
