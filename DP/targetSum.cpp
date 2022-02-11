class Solution {
public:
    
    int solve(vector<int> nums,int sum){
        int n = nums.size();
        int dp[n+1][sum+1];
        dp[0][0] = 1;
        for(int i = 1; i <= sum;i++){
            dp[0][i] = 0;
        }
        for(int i = 1; i <= n;i++){
            dp[i][0] = 1;
        }
        for(int i = 1; i <= n;i++){
            for(int j = 1; j <= sum ; j++){
                if(nums[i-1] <= j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
        
            }
        }   
        
        return dp[n][sum];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int sumArr = 0;
        target = abs(target);
        for(int i = 0 ; i < nums.size();i++){
            sumArr += nums[i];
        }
        
        int sum = (sumArr + target)/2;
         if(sumArr < target || (sumArr + target) % 2 != 0)
            return 0;
        int ans = solve(nums,sum);
        return ans;
    }
};
