class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> a;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
            {
                char c = (char)tolower(s[i]);
                a.push_back(c);
            }
            else if(s[i]>=48 && s[i]<=57)
            {
                a.push_back(s[i]);
            }
        }
        int x = 0;
        int y = a.size()-1;
        while(x<y)
        {
            if(a[x]!=a[y])
            {
                return false;
            }
            x++;
            y--;
        }
    return true;
    }
};