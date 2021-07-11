class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m)
            return false;
        map<char,int> a;
       for(int i=0;i<n;i++)
       {
           a[s[i]]++;
           a[t[i]]--;
       }
        for(int i=0;i<n;i++)
        {
            if(a[s[i]]!=0)
                return false;
        }
       return true;
    }
};
