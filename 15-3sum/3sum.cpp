class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int n = nums.size();
       vector<vector<int>> ans;

       //set<vector<int>>uniquetriplate;
sort(nums.begin(), nums.end());

       for(int i = 0; i<n; i++){
       /* for(int j = i-1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if(nums[i] +nums[j] +nums[k] == 0) {
                    vector<int> trip = {nums[i] ,nums[j], nums[k]};
                    sort(trip.begin(),trip.end());

                    if(s.find(trip) == s.end()){
                    s.insert(trip);
                    ans.push_back(trip);
                }
                }
            }
        }
       }   
};*/

//hasing or better
/*int  tar = -nums[i];
set<int> s;

for(int j = i+1; j<n; j++) {
   int thrid = tar - nums[j];

   if(s.find(thrid) != s.end()){
    vector<int> trip = {nums[i],nums[j], thrid};
    sort(trip.begin(),trip.end());
    uniquetriplate.insert(trip);
   } 
   s.insert(nums[j]);
}
       }
       vector<vector<int>> ans (uniquetriplate.begin(), uniquetriplate.end());
       return ans;
    }
};*/

//2pointer
if(i >0 && nums[i] == nums[i-1]) continue;

int j = i+1, k= n-1;

while(j < k) {
    int sum = nums[i] + nums[j] +nums[k];
    if(sum < 0) {
        j++;
    }else if(sum > 0) {
        k--;
    }else{
        ans.push_back({nums[i], nums[j],nums[k]});
        j++; k--;

        while(j < k && nums[j] == nums[j-1]) j++;
    }
}
 }return ans;
    }
};
