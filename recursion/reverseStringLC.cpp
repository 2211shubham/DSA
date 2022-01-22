class Solution {
public:
    void reverseString(vector<char>& s) {
        
        if(s.size() == 0){
            return;
        }
        char t = s[s.size()-1];
        s.pop_back();
        reverseString(s);
        s.insert(s.begin(),t);
        
    }
};
