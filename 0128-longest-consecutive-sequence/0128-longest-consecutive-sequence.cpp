class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        unordered_set<int>st;
        int maxi=1;
        int n=nums.size();
       int cnt=1;
       int lsm;
       for(int i=0;i<n;i++)
       {
        st.insert(nums[i]);
       }
       for(auto it:st)
       {
        if(st.find(it-1)==st.end())
        {
            cnt=1;
            lsm=it;
        }
        while(st.find(lsm+1)!=st.end())
        {
            cnt++;
            lsm=lsm+1;
        }
       
         maxi=max(maxi,cnt);
       }
       return maxi;
 }      
};