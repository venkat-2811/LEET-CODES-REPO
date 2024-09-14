class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int j = -1;
        int maxx = *max_element(nums.begin(), nums.end());
        int r = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != maxx)
            {
                j = i;
            }
            r = max(r, i - j);
        }

        return r;
    }
};