class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i;
        int n=nums.size();
        map<int,int>mpp;
        for(i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.second>n/2)
            {
                return it.first;
            }
        }
    
    return -1;
    }
};