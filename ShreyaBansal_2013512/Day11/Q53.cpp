class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> wd;
        int flag=0;
        vector<int> key={2,3,3,2,1,2,2,2,1,2,2,2,3,3,1,1,1,1,2,1,1,3,1,3,1,3};
        for(int i=0;i<words.size();i++)
        {   flag=0;
            int temp=key[(tolower(words[i][0])-97)];
            for(int j=1;j<words[i].size();j++)
            {
                if(key[(tolower(words[i][j])-97)]!=temp){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                wd.push_back(words[i]);
        }
        return wd;
    }
};
