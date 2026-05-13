
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> l;
        for (int i=0; i<nums.size(); i++){
            for(int j = 0; j<l.size(); j++){
                if(l[j]==nums[i]){
                    return true;
                }
            }
            l.push_back(nums[i]);
        }
        return false;
    }
};