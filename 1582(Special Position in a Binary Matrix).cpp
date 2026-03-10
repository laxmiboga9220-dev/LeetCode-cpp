class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat[0].size();
        int m= mat.size();
        vector<int> row(m,0);
vector<int> col(n,0);
        
        int i=0,j=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(mat[i][j]==1){
                row[i]++;
                col[j]++;
            
                }
            }
            
        }
        int c=0;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(mat[i][j]==1&&row[i]==1&&col[j]==1)c++;
                    
            }
        }
    return c;
        
    }
};
