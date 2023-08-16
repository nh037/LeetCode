class Solution {
public:
    string removeDuplicates(string s) {
        int sl=s.size();
        int i=0;
        while( i<sl){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                if(i>0) i-- ;
                sl=sl-2;
            }
            else{
                i++;
            }
          
        }
        return s;
    }
};