
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        vector<int> l;
        for (int i=0; i<nums.size(); i++){
            if(count(l.begin(), l.end(), nums[i])>0){
                  return true;
             }
            
            l.push_back(nums[i]);
        }
        return false;
    }
};