class Solution {
public:
    int findDuplicate(vector<int>& arr) {
       /* unordered_set<int> s;

        for(int val : nums) {
            if(s.find(val) != s.end()) {
                return val;
            }

            s.insert(val);
        }

        return - 1;
    }
};*/

int slow = arr[0] ,fast = arr[0];

do{
    slow = arr[slow];//+1
    fast = arr[arr[fast]];//+2
} while(slow != fast);

    slow = arr[0];

while(slow != fast){
    slow = arr[slow];
    fast = arr[fast];
}

    return slow;
    }
};