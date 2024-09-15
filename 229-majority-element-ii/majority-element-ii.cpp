class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        map<int,int> mp;
        set<int> a;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]] > (n/3))
            {
                x = nums[i];
                a.insert(nums[i]);
            }
        }
        vector<int> vc(a.begin(), a.end());
        return vc;
    }
};