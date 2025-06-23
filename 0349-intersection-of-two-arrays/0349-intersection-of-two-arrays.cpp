class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       vector<int>temp;
       sort(nums1.begin(),nums1.end());
       sort(nums2.begin(),nums2.end());
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
       while(i<n1 && j<n2)
       {
        if(j>0 && nums2[j-1]==nums2[j])
        {
            j++;
        }
          else if(nums1[i]<nums2[j]){
               i++;
           }
           else if(nums1[i]>nums2[j])
           {
               j++;
           }
           else{
               temp.push_back(nums2[j]);
               i++;
               j++;
           }
       }
      return temp;
    }   
};