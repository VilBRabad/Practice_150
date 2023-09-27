class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0, ans;
        for(int i=0; i<n; i++){
            if(cnt == 0){
                ans = nums[i];
                cnt++;
            }
            else if(ans == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return ans;
    }
};