class Solution {
public:
    bool rotateString(string s, string goal) {
        string concat=s+s;
        int index=concat.find(goal);
        if(index==-1)
        {
            return false;
        }
        if(s.length()!=goal.length())
        {
            return false;
        }
        return true;
    }
};