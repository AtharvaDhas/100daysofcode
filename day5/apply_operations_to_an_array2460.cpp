class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        vector<int> ans(n);
      while(i<n-1){
        if(nums[i]==nums[i+1]){
            nums[i]=nums[i]*2;
            nums[i+1]=0;
            i+=2;
        }
        else{
            i++;
        }
      
        
      }
      
      int start=0;
      int end=n-1;
      int j=0;
      while(start<=end){
        if(nums[j]!=0){
          ans[start]=nums[j];
          start++;
          j++;
        }
        else{
            ans[end]=nums[j];
            end--;
            j++;
        }
      }
     return ans;   
    }
      
};