//Moore's Voting Algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int count = 0;
    int el;
    int n = nums.size();

    //Finding the most freq element by cancelling out
    for(int i = 0; i < n; i++){
        if(count == 0){
            el = nums[i];
            count = 1;
        }
        else if(nums[i] == el){
            count ++;
        }
        else{
            count --;
        }
    }

    //Verifying
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == el){
            count1++;
        }
    }
    if(count1 > n/2){
        return el;
    }
    return -1;    
    }
};