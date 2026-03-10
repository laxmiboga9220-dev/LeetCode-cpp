class Solution {
public:
    bool hasAlternatingBits(int n) {
        string str="";
        while(n>0){
            int rem=n%2;
            str.push_back(rem);
            n=n/2;
        }
        int i=1;
        
        while(i<str.size()){
            if(str[i]==str[i-1])return  false;
            i++;
    
         }
    
    return true;   
    }
};
