
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> l;
        for (int i=0; i<nums.size(); i++){
            if(l.find(nums[i]) != l.end()){
                  return true;
             }
            
            l[nums[i]] = nums[i];
        }
        return false;
    }
};