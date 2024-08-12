class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<=i-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                    
                }
            }
        }
    }
};