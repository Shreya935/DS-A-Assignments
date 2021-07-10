class Solution {
public:
    int roman(char s)
    {
            switch(s)
            {
                    case 'I':return 1;
                    case 'V':return 5;
                    case 'X':return 10;
                    case 'L':return 50;
                    case 'C':return 100;
                    case 'D':return 500;
                    case 'M':return 1000;

            }
        return 0;
    }
    int romanToInt(string s) {
        
        int sum=0;
        for(int i=0;i<s.length();i++)
        {
            if(roman(s[i])<roman(s[i+1])){
                sum=sum-roman(s[i])+roman(s[i+1]);
            i++;}
            else 
                sum+=roman(s[i]);
        }
        return sum;
        
    }
};
