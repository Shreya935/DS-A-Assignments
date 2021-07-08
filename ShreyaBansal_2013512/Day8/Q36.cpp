class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();
        int m=mat[0].size();
        if(n==m)
        {
            vector<vector<int>> v=mat;
            int k=4;
            while(k--){
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    v[j][i]=mat[i][j];
            for(int i=0;i<n;i++)
                    reverse(v[i].begin(),v[i].end());
                mat=v;
            if(mat==target)
                return true;
        
        }            
    
    }
        return false;
    }
};
