class Solution {
private:
    bool isitPalindrome(string &s,int i,int j){
        while(i<j){
            i++;
            j--;
            if(s[i]!=s[j]){
                return false;
            }
        }
        return true;
    }
public:
    bool validPalindrome(string& s) {
        int i=-1,j=s.length();
        while(i<j){
            i=i+1,j=j-1;
            if(s[i]!=s[j]){
                return (isitPalindrome(s,i,j+1) or isitPalindrome(s,i-1,j));
            }
        }
        return true;
    }
};