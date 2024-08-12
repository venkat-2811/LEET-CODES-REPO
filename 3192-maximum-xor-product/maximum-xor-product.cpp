class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        int mod = int(1e9+7);
    for (int i = n-1; i >= 0; i--)
    {
        long long x = a & (1LL << i);
        long long y = b & (1LL << i);
        if(x && y)
        {
            continue;
        }
        else if((!x && !y)||(x && a>b) || (y && b>a))
        {
            a^=(1LL<<i);
            b^=(1LL<<i);
        }
    }
    a%=mod;
    b%=mod;
    return(a*b)%mod;
    }
};