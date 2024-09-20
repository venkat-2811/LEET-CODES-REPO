class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        int i=0;
        for(int j=n-1;j>=0;j--)
        {
            while(j>=0 && s[j]==s[i])
            {
                i++;
                j--;
            }
        }
        if(i==n)
        {
            return s;
        }
        string sub = s.substr(i);
        cout<<"sub : "<<sub<<"\n";
        string remain_rev = sub;
        cout<<"remrev : "<<remain_rev<<"\n";
        reverse(remain_rev.begin(),remain_rev.end());
        cout<<"remrev : "<<remain_rev<<"\n";
        cout<<"ans : "<<remain_rev<<" "<< shortestPalindrome(s.substr(0,i))<<" "<<sub<<"\n";
        return remain_rev + shortestPalindrome(s.substr(0,i))+sub;
    }
};