class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length()-1,k=0;
       for(int i=l;(i>=0&&s[i]==' ');i--)
           l--;
         for(int i=l;(i>=0&&s[i]!=' ');i--)
        { 
            k++;
         
            }
    return k;}
        
};
