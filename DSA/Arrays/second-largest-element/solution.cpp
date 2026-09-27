class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        int n=nums.size();
        int largest=nums[0];
        int slargest=INT_MIN;
        for(int i=0;i<n;i++){
            if(largest<nums[i]){
                slargest=largest;
                largest=nums[i];
            }
            else if(nums[i]<largest&&nums[i]>slargest){
                slargest=nums[i];
            }
            
        } 
        if(slargest==INT_MIN)
            return -1;
        return slargest;
      
    }
};