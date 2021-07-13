class Solution {
public:
    string addStrings(string num1, string num2) {
      
        if(num1[0]==0&&num2[0]==0)
            return "0";
        
        int diff=num1.length()-num2.length();
        diff=abs(diff);
        if(num1.length()>num2.length())
        {
            for(int i=0;i<diff;i++)
                num2.insert(0,"0");
        }
        else{
             for(int i=0;i<diff;i++)
                num1.insert(0,"0");
            
        }
         int n1=num1.length()-1;
        int n2=num2.length()-1,carry=0;
        string res="";        
     while(n1>=0)
     {
         int val=carry+(num1[n1]-'0')+(num2[n1]-'0');
         if(val<10)
         {
              int t=(carry+(num1[n1]-'0')+(num2[n1]-'0'))%10;
             res=to_string(val)+res;
             carry=0;
             n1--;
           
         }
         else{
             int t=(carry+(num1[n1]-'0')+(num2[n1]-'0'))%10;
             res=to_string(t)+res;
             carry=1;
             n1--;
         }
     }
        if(carry!=0)
            res=to_string(carry)+res;
        return res;
    }
};
