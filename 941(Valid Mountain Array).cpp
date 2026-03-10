class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0,j=arr.size()-1;
        if(j-i<=1)return false;   
        while(i<arr.size()-1&&arr[i]<arr[i+1])i++;
        while(j>i&&arr[j]<arr[j-1]){
            j--;
        }
        if(j-i>=1||j==arr.size()-1||i==0)return false;
        return true;
    }
};
