class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int x=0,y=numbers.size()-1;
        while(x<numbers.size()){
            if(numbers[x]+numbers[y]==target){
                ans.push_back(x+1);
                ans.push_back(y+1);
                return ans;
            }
            if(numbers[x]+numbers[y]>target){
                y--;
            }
            else if(numbers[x]+numbers[y]<target){
                x++;
            }
        }
        return ans;
    }
};
