class Solution {
    public int[] xorQueries(int[] arr, int[][] queries) {
        int n = queries.length;
        int xors[]=new int[n];
        for(int i=0;i<queries.length;i++)
        {
            int xor = 0;
            for(int j=queries[i][0];j<=queries[i][1];j++)
            {
                xor = xor ^ arr[j];
            }
            xors[i] = xor;
        }

        return xors;
    }
}