class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int> mp;
        int i=0;
        for(int i=0;i<paragraph.size();i++){
            string temp="";
            while(i<paragraph.size()&&paragraph[i]>64&&paragraph[i]<91||paragraph[i]>96&&paragraph[i]<123){
                 if(paragraph[i]>64&&paragraph[i]<91){
                    paragraph[i]=paragraph[i]+32;
                }
                temp=temp+paragraph[i];
                i++;
            }                
            mp[temp]++;            
        }
        for(string str:banned){
            mp[str]=0;
        }
        int max=0;
        string res="";
        for(auto st:mp){
            if(st.second>=max){
                max=st.second;
                res=st.first;
            }

        }
        return res;
        
    }
};
