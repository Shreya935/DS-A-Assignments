class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.length();
        vector<int> t;
         vector<int> res(n);
        for(int i=0;i<s.length();i++)
            if(s[i]==c)
                t.push_back(i);
         for(int i=0;i<s.length();i++)
         {
             if(s[i]==c)
                 res[i]==0;
             else
             {
                 int m=INT_MAX;
                 for(int j=0;j<t.size();j++)
                 {
                     int diff=abs(i-t[j]);
                     m=min(m,diff);
                 }
                 res[i]=m;
             }
         }
        
       return res; 
    }
};
