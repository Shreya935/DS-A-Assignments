class Solution {
public:
    int strStr(string haystack, string needle) {
        if(!needle.empty())
        {
            int n=haystack.length(),s=-1;
            int m=needle.length();
            for(int i=0;i<n;i++)
            {
                 int s=haystack.find(needle);
                if(s!=-1)
                    return s;
                else
                    return -1;
                
            }
        }
        else
            return 0;
        return -1;
        
    }
};
