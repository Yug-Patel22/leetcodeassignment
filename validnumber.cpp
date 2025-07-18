class Solution
{
public:
    bool isop(char a)
    {
        if (a == '+' || a == '-')
            return true;
        return false;
    }
    bool isNumber(string s)
    {
        bool e = false, dot = false, dig=false;
        for (int i = 0; i < s.length(); i++)
        {
            if(isdigit(s[i]))dig=true;
            if (s[i] == 'e' || s[i] == 'E')
            {
                if(!dig)return false;
                if (!e)
                {
                    e = true;
                    if (i == 0)
                    {
                        return false;
                    }
                    if (i == s.length() - 1)
                    {
                        return false;
                    }
                }
                else
                    return false;
            }
            else if (isalpha(s[i]))
            {
                return false;
            }
            else if (s[i] == '.')
            {
                if (e)
                    return false;
                if (!dot)
                {
                    dot = true;
                    if (i == 0)
                    {
                        if (s.length() == 1)
                            return false;
                        else if (!isdigit(s[i + 1]))
                            return false;
                    }
                    else if (i == s.length() - 1)
                    {
                        if (!isdigit(s[i - 1]))
                            return false;
                    }
                    else
                    {
                        if (!isdigit(s[i - 1]) && !isdigit(s[i + 1]))
                            return false;
                    }
                }
                else
                    return false;
            }
            else if (isop(s[i]))
            {
                if(i==s.length()-1)return false;
                if (i == 0 || s[i-1]=='e' || s[i-1]=='E')continue;
                return false;
            }
        }
        return true;
    }
};