class Solution {
public:
    string invert(const std::string &s) {
        string inverted = s;
        for (char &bit : inverted) {
            bit = (bit == '0') ? '1' : '0';
        }
        return inverted;
    }
    char findKthBit(int n, int k) {
        string s = "0";
        for (int i = 1; i < n; ++i) {
            string inverted = invert(s);  
            reverse(inverted.begin(), inverted.end()); 
            s = s + "1" + inverted; 
        }
        return s[k - 1];
    }
};