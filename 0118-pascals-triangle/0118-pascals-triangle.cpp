class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>>ans;
       for(int i=1;i<=numRows;i++)
       {
        //each rows first element will be 1
        long long res=1;
        
        vector<int>rowans;
        rowans.push_back(1);
       for(int col=1;col<i;col++)
       {
       res=res*(i-col);
        res=res/col;
        rowans.push_back((int)res);
       }
       ans.push_back(rowans);
       } 
       return ans;
    }
};