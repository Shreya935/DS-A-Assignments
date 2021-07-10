class Solution {
public:
    int brack(char s)
    {
        switch(s)
        {
            case '(':return 1;
            case ')':return -1;
            case '[':return 2;
            case ']':return -2;
            case '{':return 3;
            case '}':return -3;
        }
        return 0;
    }
    bool isValid(string s) {
        stack<int> t;
        int flag=0,temp,p=0,v;
        for(int i=0;i<s.length();i++)
        {
         v=brack(s[i]);
            if(v>0){
                t.push(v);
                p+=v;
                }
            else {
                if(!t.empty()){
                    temp=t.top();
                    t.pop();
                if(abs(temp)==abs(v)){
                    p+=v;
                    continue;}
                else {
                    flag=1;
                break;}}
                p-=v;
            }
                
        }
        if(flag==1)
            return false;
       else if(p==0)
            return true;
            return false;
        
        
    }
};
