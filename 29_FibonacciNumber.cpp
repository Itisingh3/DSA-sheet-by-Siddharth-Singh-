class Solution {
public:
    int solve(int n, vector<int>& dp){
        if(n<=1)    
            return n;
        if(dp[n]!=-1)   
            return dp[n];
        return dp[n] = solve(n-1, dp) + solve(n-2, dp);
    }
    int fib(int n) {
        // basic resursive solution
        /*if(n<=1)    return n;
        return fib(n-1)+fib(n-2);*/

      
      
        // memoization
        /*vector<int> dp(n+1, -1);
        return solve(n, dp);*/

      
      
      
      
        //Tabulation
        /*if(n<=1) 
            return n;
        vector<int>dp(n+1);
        dp[0]=0, dp[1]=1;
        for(int i=2; i<=n;i++){
            dp[i]= dp[i-1]+dp[i-2];
        }
        return dp[n];*/

      
      
      
      
        // Space Optimization
        if(n<=1)
            return n;
        int prev2=0, prev=1;
        for(int i=2; i<=n;i++){
            int curr= prev+prev2;
            prev2= prev;
            prev= curr;
        }
        return prev;
    }
};
