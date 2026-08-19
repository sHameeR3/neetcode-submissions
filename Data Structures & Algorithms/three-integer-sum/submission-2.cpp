class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>n;
        set<vector<int>> unique;
        for (int x : nums){
            n[x]++;}
        for(int i=0;i<nums.size();i++){
            int a=0;
            for(int j=0;j<nums.size();j++){
                if(i==j) continue;
                 a= -(nums[i]+nums[j]);
                 
                int count = n[a];
                if (a == nums[i])
                    count--;
                if (a == nums[j])
                    count--;

                 if(count>0){
                    vector<int>y={nums[i],nums[j],a};
                    sort(y.begin(), y.end());
                    unique.insert(y);
                 } 
            }
        }
          for (auto &triplet : unique) {
            ans.push_back(triplet);
        }

        return ans;
    }
};
