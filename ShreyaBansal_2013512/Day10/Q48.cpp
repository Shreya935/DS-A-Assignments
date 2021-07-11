class Solution {
public:
    bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
       while(i<j)
       {
          
              
                 
          if(!(s[i]>=97&&s[i]<=122 || s[i]>=48 && s[i]<=57)){
                   
                   i++;
                    }
           else if(!(s[j]>=97&&s[j]<=122 || s[j]>=48 && s[j]<=57)){
                 
                   j--;
                 }
            else if(s[i]!=s[j]){
            
                return false;}
          
              else{ i++;
               j--;}
           
       }
            
       return true;
              
    }
};
