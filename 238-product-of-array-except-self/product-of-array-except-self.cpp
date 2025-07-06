class Solution { // optimal Approach
 public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        //prefix => ans
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        int suffix = 1;
        //suffix
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1]; //ith suffix
            ans[i] *= suffix;
        }
        return ans;
    }
};
















































// class Solution { //Brute Force Approach
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//       int n=nums .size(); 
//       vector<int> ans(n,1);

//       for(int i=0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             if(i!=j){
//                 ans [i]*= nums[j];
                                    
//         }
//       }

//     }
//     return ans;
//     }
// };