class Solution {
public:
    int romanInt(char c)
    {
        if(c=='I')
        return 1;
        if(c=='V')
        return 5;
        if(c=='X')
        return 10;
        if(c=='L')
        return 50;
        if(c=='C')
        return 100;
        if(c=='D')
        return 500;
        else
        return 1000;  
    }
    int romanToInt(string s) {
        int res=0;
        int i=0;
        while(i<s.length())
        {
            if(i!=s.length()-1 && romanInt(s[i])< romanInt(s[i+1]))
            {
                int diff=romanInt(s[i+1])-romanInt(s[i]);
                res+=diff;
                i=i+2;
            }
            else
            {
                res+=romanInt(s[i]);
                i++;
            }
        }
        return res;
    }
};