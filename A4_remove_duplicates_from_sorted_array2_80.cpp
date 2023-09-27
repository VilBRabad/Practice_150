class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        int cnt = 0;
        temp.push_back(nums[0]);
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                cnt++;
                if(cnt<2){
                    temp.push_back(nums[i]);
                }
            }
            else{
                temp.push_back(nums[i]);
                cnt=0;
            }
        }
        for(int i=0; i<temp.size(); i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }
};