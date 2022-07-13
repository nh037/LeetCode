class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxreachable=nums[0];
        int i=1;
        while(i<nums.size() && maxreachable>=i){
            if(i+nums[i]>maxreachable){
                maxreachable=i+nums[i];
            }
            i++;
        }
        if(maxreachable>=nums.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};