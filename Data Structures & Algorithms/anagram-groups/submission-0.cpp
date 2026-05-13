class Solution {
public:

    bool isAnagram(string s1, string s2){
        if(s1.length() != s2.length()){
            return false;
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return (s1==s2);
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        int i = 0;
        while(strs.size() > 0){
            sol.push_back({});
            sol[i].push_back(strs[0]);
            strs.erase(strs.begin());
            for(int j = 0; j < strs.size(); j++){
                if (isAnagram(sol[i][0], strs[j])){
                    sol[i].push_back(strs[j]);
                    strs.erase(strs.begin() + j);
                    j--;
                }
            }
            i ++;
        }
        return sol;
    }
};
