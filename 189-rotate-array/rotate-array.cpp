class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> nums1(n);
        for (int i=0;i<n;i++)
        {
            int x = (i + k)%n;
            nums1[x] = nums[i];
        }
        for (int i=0;i<n;i++)
        {
            nums[i] = nums1[i];
        }  
    }
};