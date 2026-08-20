class Solution {
public:
    int trap(vector<int>& height) {
        int total=0,leftmax=0;
        int n=height.size();
        int rightmax=0;
        int left = 0;
        int right = height.size() - 1;
        while(left<right){
            if(height[left]<=height[right]){
                if(leftmax>height[left]){
                    total+=leftmax-height[left];
                    left++;
                }
                else{
                    leftmax=height[left];
                    left++;
                }
            }
            else{
                if(rightmax>height[right]){
                    total+=rightmax-height[right];
                    right--;
                }
                else{
                    rightmax=height[right];
                    right--;
                }
            }
        }
        return total;
    }
    
};
