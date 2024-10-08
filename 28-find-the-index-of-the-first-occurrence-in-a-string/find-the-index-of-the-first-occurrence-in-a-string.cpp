class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int x = needle.length();
        int index = -1;
        for(int i=0;i<=n-x;i++)
        {
            string s = haystack.substr(i,x);
            if(s == needle)
            {
                index = i;
                break;
            }
        }

        return index;
    }
};