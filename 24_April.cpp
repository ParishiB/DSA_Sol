class Solution {
public:
    int tribonacci(int n) {

        if(n==0)
			return 0;
        if(n<=2)
			return 1;
        vector<int>tb(n+1);
        tb[0] = 0;
        tb[1] = 1;
        tb[2] = 1;
        for(int i=3;i<=n;i++)
            tb[i] = tb[i-3]+tb[i-2]+tb[i-1]; 
        return tb[n];

        
    }
};
