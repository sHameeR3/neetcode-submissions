class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int max=1,j=0;
        bool ispresent=false,iszero=false;
        for(int i=0;i<nums.size();i++){
            if(ispresent&&nums[i]==0){
                iszero=true;
                break;
            }
            if(nums[i]==0){
                ispresent=true;
                continue;
            }
            max*=nums[i];
        }
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(iszero){
                ans.push_back(0);
                continue;
            }
            if(ispresent&&nums[i]==0){
                ans.push_back(max);
                continue;
            }
            if(ispresent&&nums[i]!=0){
                ans.push_back(0);
                continue;
            }
            if(!ispresent){
                ans.push_back(max/nums[i]);
            }
           
        }
        return ans;
    }
};
