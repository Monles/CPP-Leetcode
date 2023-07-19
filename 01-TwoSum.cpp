// Brute Force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i =0;i<n-1;i++){
            for(int j= i+1; j< n; j++){

            }
        }
    }
};


// Hash Table

class Solution {
    public:
    vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> numMap;
    int n = nums.size();


    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numMap.count(complement)) {
            return {i, numMap[complement]};
        }
        numMap[nums[i]] = i;
    }
    return {};
    }
};