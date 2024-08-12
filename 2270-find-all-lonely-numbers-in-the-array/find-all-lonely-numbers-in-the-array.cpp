class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int> lonely;
        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]] == 1)
            {
                if(mp[(nums[i]-1)]==0 && mp[(nums[i]+1)]==0)
                {
                    lonely.push_back(nums[i]);
                }
            }
        }

        return lonely;
    }
};