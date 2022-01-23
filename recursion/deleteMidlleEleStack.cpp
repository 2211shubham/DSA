class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    void solve(stack<int> &s, int k){
        if(s.size() == k){
            s.pop();
            return;
        }
        int temp = s.top();
        s.pop();
        solve(s,k);
        s.push(temp);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        
        int k = ceil(sizeOfStack/2.0);
        
        solve(s,k);
        
    }
};
