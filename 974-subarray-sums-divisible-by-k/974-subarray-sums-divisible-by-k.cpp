class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int sum=0,rem=0;
        m[0]++;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            rem=sum%k;
            if(rem<0){
                rem+=k;
            }
            auto itr=m.find(rem);
            if(itr!=m.end()){
                count+=(itr->second);
            }
            m[rem]++;
        }
        return count;
    }
};