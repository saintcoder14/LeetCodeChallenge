class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
                a.push(c);
            else if(a.size()==0||( s[i]==']'&& a.top()!='['))
                return false;
            else if(a.size()==0||( s[i]==')'&& a.top()!='('))
                return false;
            else if(a.size()==0||( s[i]=='}'&& a.top()!='{'))
                return false;
            else 
                a.pop();
        }
        if(a.empty())
            return true;
        else
            return false;
    }
};