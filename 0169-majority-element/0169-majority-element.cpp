class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] > (n/2))
            {
                x = nums[i];
            }
        }
        return x;
    }
};