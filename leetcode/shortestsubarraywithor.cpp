class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int cnt=1;
        int sum=nums[0];
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int maxi = nums[0];
        if(maxi>=k){
            return 1;
        }
        else{
            for(int i =1;i<nums.size();i++){
          if(sum<k) {
            sum+=nums[i];
            cnt++;
          }
          else{
            break;
          }
        }
        if(sum>k) return cnt;
         else return -1;
        }
        
    
    }
};