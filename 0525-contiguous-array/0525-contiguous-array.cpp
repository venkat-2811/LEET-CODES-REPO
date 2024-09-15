class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int mask = 0, maxlength = 0;
        unordered_map<int,int> m;
        m[0]=-1;

        for(int i=0;i<n;i++)
        {
            if(nums[i] == 0)
            {
                mask--;
            }
            else if(nums[i] == 1)
            {
                mask++;
            }

            if(m.find(mask) != m.end())
            {
                maxlength = max(maxlength,i-m[mask]);
            }
            else
            {
                m[mask] = i;
            }
        }

        return maxlength;
    }
};