class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

sort(nums.begin(), nums.end());
vector<vector<int>> result;
int n = nums.size();
for (int i = 0; i < n - 2; i++) {
if (i > 0 && nums[i] == nums[i-1]) continue; // duplicate fixed number skip karo
if (nums[i] > 0) break; // sorted hai, agar yeh positive hai toh aage sab positive honge
int left = i + 1, right = n - 1;
while (left < right) {
int sum = nums[i] + nums[left] + nums[right];
if (sum == 0) {
result.push_back({nums[i], nums[left], nums[right]});
left++;
right--;
while (left < right && nums[left] == nums[left-1]) left++; // duplicate skip
while (left < right && nums[right] == nums[right+1]) right--; // duplicate skip
} else if (sum < 0) {
left++;
} else {
right--;
}
}
}
return result;
}
};