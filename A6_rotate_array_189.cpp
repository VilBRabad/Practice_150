//Better Solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k = k%n;
        int d = n-k;
        int temp[d];

        for(int i=0; i<d; i++){
            temp[i] = nums[i];
        }
        for(int i=d; i<n; i++){
            nums[i-d] = nums[i];
        }
        
        for(int i=k; i<n; i++){
            nums[i] = temp[i-k];
        }
    }
};

//Optimize Solution
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int d = n-k;
        reverse(nums.begin(), nums.begin()+d);
        reverse(nums.begin()+d, nums.end());
        reverse(nums.begin(), nums.end());
    }
};
