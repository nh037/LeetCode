class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      vector<int>v;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size()-1; i++){
            int val = nums[i]^nums[i+1];
            if(val == 0){
                v.push_back(nums[i]);
                i++;
            }
        }
        return v;
    }
};