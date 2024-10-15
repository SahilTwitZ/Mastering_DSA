#include <iostream>
#include <stack>

using namespace std;

bool isValid(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        // if open brkt
        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else
        {
            // if close brkt
            if (!s.empty())
            {
                char top = s.top();
                if ((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }

    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str1 = "{}{{}";
    string str2 = "][]";
    string str3 = "[({})]";

    if (isValid(str3))
    {
        cout << "Valid";
    }
    else
    {
        cout << "Not Valid";
    }
}