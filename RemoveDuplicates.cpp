/*Problem 26 on Leetcode. Difficulty: Easy*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int place = -1;
        int n = nums.size();
        int j = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[j]) {
                nums[j + 1] = nums[i];
                j = j + 1;
            }
        }
        for (int i = 1; i < n - j; i++) {
            nums.pop_back();
        }
        return nums.size();
    }
};