class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
         unordered_map<int, int> hash;
        int maxi=nums[0];
        for(int i=0;i<n;i++)
        {
           maxi=max(maxi,nums[i]);
           hash[maxi]= {0};
        }
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(hash[nums[i]]==1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};