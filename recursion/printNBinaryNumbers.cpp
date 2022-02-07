class Solution{
public:	

    void solve(int one, int zero,vector<string> &ans, string op,int N){
        if(N == 0){
            ans.push_back(op);
            return;
        }
        string op1 = op;
        op1.push_back('1');
        solve(one + 1, zero, ans,op1,N-1);
        if(one > zero){
            string op2 = op;
            op2.push_back('0');
            solve(one,zero + 1,ans,op2,N-1);
        }
    }
    
	vector<string> NBitBinary(int N)
	{
	   int one = 0;
	   int zero = 0;
	   vector<string> ans;
	   string op;
	   solve(one,zero,ans,op,N);
	   return ans;
	}
};
