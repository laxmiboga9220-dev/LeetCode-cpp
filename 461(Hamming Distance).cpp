class Solution {
public:
    int hammingDistance(int x, int n) {
      
        int y=x^n,c=0;
        while(y>0){
            if(y%2==1)c++;
            y=y/2;
        }

        return c;
    }
};
