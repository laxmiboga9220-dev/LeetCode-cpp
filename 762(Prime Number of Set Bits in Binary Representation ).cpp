class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int c=0,temp,f=0;
        while(left<=right){
            temp=__builtin_popcount(left);
            f=0;
            for(int i=2;i<temp;i++){
                if(temp%i==0){
                    f=1;
                    break;
                }
            }
            if(f==0&&temp!=1)c++;
            left++;
        }
        return c;      
    }
};
