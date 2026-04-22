class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string first = strs[0];
        string last = strs[n - 1];
        int minLength = min(first.length(), last.length());
        string len = "";

        for(int i = 0; i < minLength; i++){
            if(first[i] != last[i]){
                return len;
            }
            len = len + first[i];
        }
    return len;
    }
};