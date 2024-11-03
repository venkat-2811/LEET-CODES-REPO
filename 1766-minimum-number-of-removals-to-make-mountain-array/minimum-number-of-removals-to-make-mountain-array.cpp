class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) return 0;
        
        vector<int> lis(n, 1);
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    lis[i] = max(lis[i], lis[j] + 1);
                }
            }
        }
        vector<int> lds(n, 1);
        for (int i = n - 2; i >= 0; i--) {
            for (int j = n - 1; j > i; j--) {
                if (nums[i] > nums[j]) {
                    lds[i] = max(lds[i], lds[j] + 1);
                }
            }
        }
        int minRemovals = n;
        for (int i = 1; i < n - 1; i++) {
            if (lis[i] > 1 && lds[i] > 1) { 
                minRemovals = min(minRemovals, n - (lis[i] + lds[i] - 1));
            }
        }
        return minRemovals;
    }
};