// {}{}->valid
// {{}}->valid
// {{}}}->not valid
// }{->not valid

// condition ->
// no. of open = no. of close
// every close brace should have open brace before it
// minm reversing of braces to make valid is what?

// logic
// string length odd -> return -1
// input string -> valid part remove then remaining part may be    i>{{{{
//     ii>}}}}
//     iii>}}}{{{
// a -> count of close braces
// b -> count of open braces
// case i> {{{{ -> b = 4 => b/2   {(a+1/2) + (b+1/2)}
// case ii>}}}} -> a = 4 => a/2   {(a+1/2) + (b+1/2)}
// case iii> -> case a => }}}(odd){{{(odd) -> (a+1/2) + (b+1/2)
//  case b => }}}}(even){{{{(even) -> (a+1/2) + (b+1/2)

// ans  = (a+1/2) + (b+1/2)

#include <iostream>
#include <stack>
using namespace std;
int findMinimumCost(string str)
{

    // odd condition
    if (str.length() % 2 == 1)
    {
        return -1;
    }

    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
            s.push(ch);
        else
        {
            // ch is closed brace
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }

    // stack contains invalid expression
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }

    int ans = (a + 1) / 2 + (b + 1) / 2;
    cout << ans;
}

int main()
{
    string s1 = "{{{}}}";
    string s2 = "{{{}";
    string s3 = "}{";
    string s4 = "{}{}{}";
    string s5 = "{}{{}";

    findMinimumCost(s5);
}
