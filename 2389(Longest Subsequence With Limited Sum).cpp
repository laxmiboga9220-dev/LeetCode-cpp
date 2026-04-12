class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        //.........Approach 1................
        //Bruth Force 
        /*vector<int> res;
        sort(nums.begin(),nums.end());
        
        for(auto i:queries){
            int sum=0,curr=0,j=0;
             
            while(j<nums.size()){
                if(sum+nums[j]<=i){
                    sum=sum+nums[j];
                    
                    curr++;      
                }
                j++;
            }
            res.push_back(curr);
        }
        return res;*/

        //.............Approach 2............
        // Optimal Using Prefix Sum and Binary Search
         sort(nums.begin(),nums.end());
        vector<int> prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        vector<int> res;
        
        for(auto q:queries){
            int l=0,h=nums.size()-1;
            
            while(l<=h){
                int mid=(l+h)/2;
                if(prefix[mid]<=q){
                    l=mid+1;
                }else{
                    h=mid-1;
                }
            }
            res.push_back(h+1);
        }
        return res;
        
    }
};
