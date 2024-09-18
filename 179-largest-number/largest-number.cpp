class Solution {
public:

    static bool compare(string x,string y)
    {
        return (x+y)>(y+x);
    }
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        for(int x:nums)
        {
            a.push_back(to_string(x));
        }
        sort(a.begin(),a.end(),compare);
        string ans="";
        for(string s:a)
        {
            ans+=s;
        }
        if(a[0]=="0")
        {
            return "0";
        }
        else
        {
            return ans;
        }
    }
};