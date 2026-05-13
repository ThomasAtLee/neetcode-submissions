class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> sol;
        vector<vector<int>> high;
        vector<int> res;
        for(const auto& n : nums){
            if(sol.contains(n)){
                sol[n] ++;
            }
            else{
                sol[n] = 1;
            }
        }

        for(int i = 0; i < k; i++){
            high.push_back({0,0});
            for(const auto& pair : sol){
                vector<int> v = {pair.first, pair.second};
                if(find(high.begin(), high.end(), v) != high.end()){
                    continue;
                }
                if(pair.second > high[i][1]){
                    high[i][0] = pair.first;
                    high[i][1] = pair.second;
                }
            }
        }

        for(int i = 0; i < high.size(); i++){
            res.push_back(high[i][0]);
        }
        return res;
    }
};
