//With 2 pass(of nums)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for(int i = 0; i < 2; i++){
        for(int num : nums){
            ans.push_back(num);
        }
    }
    return ans;    
    }
};