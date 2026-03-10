class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        if(name.size()>typed.size())return false;
        int i=0,j=0;
      
        int item,ic=0,jc=0;
        while(i<name.size()){
            item=name[i];
            while(name[i]==item){ic++;i++;}
            while(typed[j]==item){j++;jc++;} 
            if(ic>jc)return false;
            if(name[i]!=typed[j])return false;
            ic=0;jc=0;
        }
        return true;
    }
};
