class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        
        vector<int> res;
        vector<pair<int,int>> temp;
        for(auto i :arr){
            temp.push_back({__builtin_popcount(i),i});
        }
        sort(temp.begin(),temp.end());
        for(auto j:temp){
            res.push_back(j.second);
        }
        return res;
    }
};
