class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        bool check = true;

        if (strs.empty()) {
            return ans; // Return empty string if the input vector is empty
        }

        for (int i = 0; i < strs[0].size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[0][i] != strs[j][i]) {
                    check = false;
                    break;
                }
            }
            if (check) {
                ans += strs[0][i];
            } else {
                break;
            }
        }
        return ans;
    }
};
