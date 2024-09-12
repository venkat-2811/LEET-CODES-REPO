class Solution {
public:
    bool check(const string& allowed, const string& word)
    {
    set<char> allowedSet(allowed.begin(), allowed.end()); 
    for(char c : word)
    {
        if(allowedSet.find(c) == allowedSet.end())
        {
            return false;
        }
    }
    return true;
}

int countConsistentStrings(const string& allowed, vector<string>& words)
{
    int count = 0;
    for(const string& word : words)
    {
        if(check(allowed, word))
        {
            count++;
        }
    }
    
    return count;
}
};