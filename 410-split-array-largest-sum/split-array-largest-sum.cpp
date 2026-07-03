class Solution {
public:
    int smallsub(vector<int> &nums,int mid){
        int subarray =1;
        int sum = 0;
        for(int i = 0 ;i < nums.size();i++){
            if(sum + nums[i] <= mid){
            sum += nums[i];
        }
        else{
            subarray++;
            sum = nums[i];
        }
        
    }
        return subarray;}
    int small(vector<int>& nums){
        int mini = INT_MIN;
        for(int i = 0;i< nums.size();i++){
            mini = max(mini,nums[i]);
        }
        return mini;
    }
    int biggie(vector<int>& nums){
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
        }
        return sum;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = small(nums);
        int high = biggie(nums);
        while(low <= high){
            int mid = low +(high - low)/2;
            if(smallsub(nums,mid)>k){
                low = mid + 1;
            }
            else{
            high = mid - 1;}
        }
        return low;
    }
};