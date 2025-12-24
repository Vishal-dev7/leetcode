class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        
        set<vector<int>>st;
        int n=nums. size();
        for(int i=0;i<n;i++)
            {
                for(int j=i+1;j<n;j++)
                    {
                        unordered_set<long long>hashmap;
                        for(int k=j+1;k<n;k++)
                            
                                    {
                                        long long sum=(long long) nums[i]+nums[j]+nums[k];
                                        long long fourth=target-sum ;
   if(hashmap.find(fourth)!= hashmap.end())
   {  
       vector<int>temp;
       temp.push_back(nums[i]) ;
    temp.push_back(nums[j]) ;
    temp.push_back(nums[k]) ;
    temp.push_back(fourth) ;
    
       sort(temp. begin(), temp. end());
       st. insert(temp) ;
   }
       hashmap.insert(nums[k]) ;                               
                                    }
                            }
                    }
            
        vector<vector<int>>ans{st. begin(), st. end()} ;
        return ans;
    }
};