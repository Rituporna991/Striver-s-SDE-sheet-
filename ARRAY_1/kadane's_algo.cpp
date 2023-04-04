class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=0;
        int profit=INT_MIN;
        for(int i=0;i<nums.size();i++){
            curr+=nums[i];
            if(profit<curr){
                profit=curr;
            }
            if(curr<0){
                curr=0;
            }
        }
        return profit;
    }
};