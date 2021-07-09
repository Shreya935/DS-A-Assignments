class Solution {
public:
    string longestCommonSuffix(vector<string>& strs) {
        int l=strs.size(),c=0;
        for(int i=0;i<l;i++)
            reverse(strs[i].begin(),strs[i].end());
        for(int i=0;i<l;i++)
            sort(strs.begin(),strs.end());
           int m=min(strs[0].size(),strs[l-1].size());
        for(int i=0;i<m;i++)
                if(strs[0][i]==strs[l-1][i])
                  c++;
        else break;
        if(c>0){
            string s=strs[0].substr(0,c);
        reverse(s.begin(),s.end());
            return s;
        }
        else 
            return"";
    }
};
