class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
         unordered_map<int, int> mpp;
        int maxi=nums[0];
        for(int i=0;i<n;i++)
        {
           maxi=max(maxi,nums[i]);
           mpp[maxi]= {0};
        }
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
       for(int i=0;i<n;i++)
       {
        if(mpp[nums[i]]==1)
        {
            return nums[i];
        }
       }
        
        return -1;
    }
};