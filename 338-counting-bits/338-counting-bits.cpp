class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>result;
        for(int i=0;i<=n;i++){
            result.push_back(getNoofSetBits(i));           
        }
        return result;
    }
    int getNoofSetBits(int num){
        int count=0;
        for(int i=0;i<=31;i++){
            if((num & (1<<i))>0){
                count++;
            }
        }
        return count;
    }
};