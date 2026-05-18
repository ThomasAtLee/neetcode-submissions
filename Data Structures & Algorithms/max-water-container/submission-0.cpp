class Solution {
public:
    int maxArea(vector<int>& heights) {
       int max = 0;
       int r = heights.size()-1;
       int l = 0;

       while(r>l){
        if (min(heights[l],heights[r])*(r-l) > max){
            max = min(heights[l],heights[r])*(r-l);
        }

        if(heights[l] < heights[r]){
            l++;
        }
        else{
            r--;
        }

       }
       return max;
    }
};
