class Solution {
public:
    int findKthNumber(int n, int k)
    {
        auto countSteps = [&](long curr, long n)
        {
            long steps = 0;
            long first = curr, last = curr;
            while (first <= n) 
            {
                steps += min(last, (long)n) - first + 1;
                first *= 10;
                last = last * 10 + 9;
            }
        return steps;
        };
    
        long curr = 1;
        k--;
        while(k > 0)
        {
            long steps = countSteps(curr, n);
            if(steps <= k)
            {
                k -= steps;
                curr++; 
            } 
            else 
            {
                curr *= 10;
                k--;
            }
        }
        return curr;
    }
};