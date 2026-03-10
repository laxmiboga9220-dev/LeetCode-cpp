class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,string> mp;        
        priority_queue<int> pq;
        vector<string> res;        
        for(auto i:score){
            pq.push(i);
       
        }
        int i=1;
        while(!pq.empty()){
            if(i==1){
                mp[pq.top()]="Gold Medal";
            }else if(i==2){
                mp[pq.top()]="Silver Medal";
            }else if(i==3){
                mp[pq.top()]="Bronze Medal";}else{
                mp[pq.top()]=to_string(i);
                
                
                    }
            i++;
            pq.pop();
        }
        for(int l:score){
            res.push_back(mp[l]);
        }
        return res;
    }
};
