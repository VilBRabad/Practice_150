class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int low=0, high=n-1;
        while(low<=high){
          if(nums[low] == val){
            swap(nums[low], nums[high]);
            high--;
          }
          else{
            low++;
          }
        }
        int cnt=0;
        for(int i=0; i<n; i++){
          if(nums[i] == val){
            cnt++;
          }
        }
        return (n-cnt);
    }
};