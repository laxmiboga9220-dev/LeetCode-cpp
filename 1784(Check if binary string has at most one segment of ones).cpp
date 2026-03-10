class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size()==1)return true;
        int n=0,i=0;
        while(i<s.size()){
            
            if(s[i]=='1'){
                n++;
                while(i<s.size()&&s[i]=='1')i++;
                if(n>1)return false;
            }
            else{
                i++;
            }

        }
        
        return true;
    }
};
