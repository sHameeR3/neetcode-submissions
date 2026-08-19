class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        if (n < 2) return 0;

        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int width = j-i;
            int height = min(heights[i],heights[j]);
            int cap = width*height;
            if(cap>ans) ans =cap;
            if(heights[i]<=heights[j]){
                i++;
            }
            else if(heights[i]>heights[j]){
                j--;
            }
        }
        return ans;
    }
};
