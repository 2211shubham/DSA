class Solution {
public:
    
    void solve(int n, int k, int index, vector<int> &v,int &ans){
        if(v.size() == 1){
            ans = v[0];
            return;
        }
        index = (index + k)% v.size();
        v.erase(v.begin() + index);
        solve(n,k,index,v,ans);
    }
    
    int findTheWinner(int n, int k) {
        int index = 0;
        vector<int> v;
        for(int i = 0; i < n ; i++){
            v.push_back(i+1);
        }
        int ans;
        k = k-1;
        solve(n,k,index,v,ans);
        return ans;
    }
};
