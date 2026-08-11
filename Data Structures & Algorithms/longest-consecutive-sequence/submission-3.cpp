class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max=0,j=0,m=0;
        set<int>v(nums.begin(),nums.end());
        for(int n : v){
          if (j == 0 || n - 1 == m) {
                j++;
            } 
            else {
                j = 1;
            }

            m = n;
            max = std::max(max, j);}
                 
        return max;
    }
};
