class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> nums2;
        int count = 0;
        int highest_count = 0;
        for(const auto& n : nums){
            nums2[n] = n;
        }

        int n;
        for(const auto& i : nums2){
            n = i.second;
            if(nums2.find(n-1) == nums2.end()){
                count = 1;
                while(nums2.find(n+1) != nums2.end()){
                    count++;
                    n++;
                }
                if(count > highest_count){
                    highest_count = count;
                }
            }
        }

        return highest_count;
    }
};
