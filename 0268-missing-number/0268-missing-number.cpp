class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i,j;
        bool flag;
        int n=nums.size();
        for(i=0;i<=n;i++)
        {
             flag=0;
            for(j=0;j<=n-1;j++)
            {
                if(nums[j]==i)
                flag=true;
            }
            if(flag==false)
            {
               return i;
            }
            
        }return -1;
        
    }
};