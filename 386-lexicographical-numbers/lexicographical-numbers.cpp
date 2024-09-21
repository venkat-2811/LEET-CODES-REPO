class Solution {
public:
    vector<int> lexicalOrder(int n) {
       vector<string> s;
       for(int i=1;i<=n;i++)
       {
            s.push_back(to_string(i));
       }
       sort(s.begin(),s.end());
       vector<int> a;
       for(string x : s)
       {
            a.push_back(stoi(x));
       }

       return a;
    }
};