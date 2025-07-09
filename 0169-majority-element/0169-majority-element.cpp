class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,j;
        int n=nums.size();
        int cnt;
        for(i=0;i<n;i++)
        {
            cnt=0;
            for(j=0;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    cnt++;
                }
            }
        
        if(cnt>n/2)
        {
            return nums[i];
        }
    }
    return -1;
    }
};