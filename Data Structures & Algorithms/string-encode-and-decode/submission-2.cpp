#include <string>
class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(const auto& g : strs){
            s += to_string(g.length());
            s += "#";
            s += g;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs = {};
        int i = 0;
        string num = "";
        int n;
        while(i<s.length()){
           
            if(s[i]=='#'){
                n = stoi(num);
                i++;
                strs.push_back(s.substr(i,n));
                i+=n;
                num = "";
            }
            num+=s[i];
            i++;
        }
        
        return strs;
    }
};
