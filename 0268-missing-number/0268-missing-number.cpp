class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i;
        int n=nums.size();
        int xor1=0;
        int xor2=0;
        for(i=0;i<n;i++)
        {
            xor1=xor1^(i+1);
            xor2=xor2^nums[i];
        }
        
      return xor1^xor2;
    }
};