class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        int maxi=1;
        int n=nums.size();
       int cnt=1;
       int lastsmall=nums[0];
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++)
       {
        if(nums[i]==lastsmall)
        {
            continue;
        }
        else if(nums[i]-1==lastsmall)
        {
            cnt++;
            lastsmall=nums[i];
        }
         
        else 
        {
            cnt=1;
            lastsmall=nums[i];
        }
         maxi=max(maxi,cnt);
       }
       return maxi;
 }      
};