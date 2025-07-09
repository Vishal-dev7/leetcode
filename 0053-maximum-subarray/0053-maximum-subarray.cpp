class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int i;
      int maxi=INT_MIN;
      int sum;
      int n=nums.size();
      int start;
      
      for(i=0;i<n;i++)
      {
         if(sum==0)
         {
            start=i;
         }
         sum+=nums[i];
         if(sum>maxi)
         {
            maxi=max(maxi,sum);
            int anstart=start;
            int ansend=i;
         }
         if(sum<0)
         {
            sum=0;
         }
        }
       return maxi; 
    }
};