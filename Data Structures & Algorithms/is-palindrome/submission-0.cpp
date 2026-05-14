class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";

        for (const auto& k : s){
            if(isalnum(k)){
                str += tolower(k);
            }
        }
        string rstr = str;
        reverse(rstr.begin(), rstr.end());

        return rstr == str;
    }
};
