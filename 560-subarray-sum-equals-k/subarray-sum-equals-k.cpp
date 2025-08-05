class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        for(int i =0; i<n; i++){//strting point
            int sum = 0;
            for(int j = i;j<n; j++){//ending
                sum += nums[j];
                if(sum == k) count++;
            }
        }
        return count;
    }
};