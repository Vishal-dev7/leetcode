class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i;
        int n=nums.size();
        int cnt=0;
        int el=0;
        
        for(i=0;i<n;i++)
        {
           
           if(cnt==0)
           {
              el=nums[i];
              cnt=1;
           }
           else if(nums[i]==el)
           {
            cnt++;
           }
           else{
            cnt--;
           }
        }
        int  counter=0;
        for(i=0;i<n;i++)
        {
            if(nums[i]==el)
            {
                counter++;
            }
        }
            if(counter>(n/2))
            {
                return el;
            }
        
        
    
    return -1;
    }
};