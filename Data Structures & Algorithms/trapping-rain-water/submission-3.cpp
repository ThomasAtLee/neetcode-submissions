class Solution {
public:
    int trap(vector<int>& height) {
        int r = height.size()-1;
        int l = 0;
        int area = 0;
        int fill = 0;
        while(r>l){
            fill = 0;
            for(int i = l+1; i <= r; i++){
                if (height[i] >= height [l]){
                    area += min(height[i], height[l])*(i-l-1) - fill;
                    l = i;
                    break;
                }
                fill += height[i];
            }

            if(r<=l){
                break;
            }

            fill = 0;
            for(int i = r-1; i >= l; i--){
                if(height[i] >= height[r]){
                    area += min(height[i], height[r])*(r-i-1) - fill;
                    r = i;
                    break;
                }
                 fill += height[i];
            }
        }
    return area;
    }
};
