class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
vector<int> excludeLast(nums.begin(), nums.end() - 1);
vector<int> excludeFirst(nums.begin() + 1, nums.end());
return max(robLinear(excludeLast), robLinear(excludeFirst));
    }

        int prev2=0,prev1=0;
        for(int num : nums){
            int curr = max(prev1, prev2+ nums);
            prev2 = prev1;
            prev1 =curr;
        }
        return prev1;
        
    }


