class Solution{
public:

    int t[102][102];

    int solve(int arr[], int i,int j){
        if(i >= j) return 0;
        int mn = INT_MAX;
        
        if(t[i][j] != -1){
            return t[i][j];
        }
        
        for(int k = i; k <= j-1; k++){
            int tempAns = solve(arr, i, k) + solve(arr, k+1, j) + (arr[i-1] * arr[k] * arr[j]); 
            if(tempAns <= mn){
            mn = tempAns;
            }
        }
        
        return t[i][j] = mn ;
        
    }


    int matrixMultiplication(int N, int arr[])
    {
        memset(t,-1, sizeof(t));
        int i = 1;
        int j = N-1;
        
        int ans = solve(arr, i, j);
        return ans;
    }
};
