class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> sol;
        int m = 1;
        for(int j = 0; j < nums.size(); j++){
            m=1;
            for(int i = 0; i < nums.size(); i++){
                if(i==j){
                    continue;
                }
                m *= nums[i];
            }
            sol.push_back(m);
        }
        return sol;
    }
};
