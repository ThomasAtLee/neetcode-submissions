class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size() - 1;
        int t;
        int x;
        int tmp;
        bool dup = false;
        unordered_map<int, vector<int>> triplets;
        vector<vector<int>> sol;
        for (int i = 0; i < nums.size(); i++) {
            t = 0 - nums[i];
            l = 0;
            r = nums.size() - 1;
            while (r > l) {
                if (l == i) {
                    l++;
                    continue;
                }
                if (r == i) {
                    r--;
                    continue;
                }

                tmp = nums[r] + nums[l];
                if (tmp == t) {
                    dup = false;
                    vector<int> trip = {nums[i], nums[l], nums[r]};
                    for (const auto& v : triplets) {
                        vector<int> c = v.second;

                        if (count(c.begin(), c.end(), nums[l]) == count(trip.begin(), trip.end(), nums[l]) &&
                            count(c.begin(), c.end(), nums[r]) == count(trip.begin(), trip.end(), nums[r]) &&
                            count(c.begin(), c.end(), nums[i]) == count(trip.begin(), trip.end(), nums[i])) {
                            dup = true;
                            l++;
                            r--;
                            break;
                        }
                    }

                    if (!dup) {
                        triplets.insert({x, {nums[i], nums[l], nums[r]}});
                        x++;
                        l++;
                        r--;
                    }
                }

                else if (tmp > t) {
                    r--;
                }

                else if (tmp < t) {
                    l++;
                }
            }
        }
        for (const auto& t : triplets) {
            sol.push_back(t.second);
        }
        return sol;
    }
};
