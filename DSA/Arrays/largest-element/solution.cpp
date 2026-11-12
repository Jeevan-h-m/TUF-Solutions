class Solution {
public:
    int largestElement(vector<int>& nums) {
       int n=nums.size();
       int larg=nums[0];
       for(int i=0;i<n;i++){
        if(larg<nums[i]){
            larg=nums[i];
        }
       }
       return larg;
        
    }
};