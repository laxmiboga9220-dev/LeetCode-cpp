class Solution {
public:
    int binaryGap(int n) {
        int temp=n,len;
        string s="";
        while(temp>0){
            s.push_back(temp%2);
            temp=temp/2;
        }
        reverse(s.begin(),s.end());
        int i=0,j=1;
        while(j<s.size()){
            if(s[j]==1){
                len=max(j-i,len);
                i=j;
                j=i;
            }
            j++;

        }
        return len;
    }
};
