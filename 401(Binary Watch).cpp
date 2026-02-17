class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        for(int h=0;h<12;h++){
            for(int m=0;m<60;m++){
                string temp="";
                int com=__builtin_popcount(m)+__builtin_popcount(h);
                if(com==turnedOn){
                     temp=to_string(h)+':';
                    if(m<10){
                        temp=temp+'0'+to_string(m);
                    }
                    else{
                        temp=temp+to_string(m);
                    }
                    res.push_back(temp);
                }
            }
        }
        return res;
        
    }
};