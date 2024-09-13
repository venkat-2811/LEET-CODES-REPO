class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int sum = (n*(n+1))/2;
        int sumarray = 0;
        for(int i=0;i<n;i++)
        {
            sumarray += nums[i];
        }

        return sum - sumarray;
    }
}