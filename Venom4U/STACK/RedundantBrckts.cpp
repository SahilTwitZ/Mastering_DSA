#include <iostream>
#include <stack>

using namespace std;

bool isRedundant(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '*' || ch == '/' || ch == '-')
        {
            st.push(ch);
        }
        else
        {
            // ch ya to ) or lowercase letter
            if (ch == ')')
            {
                bool Isredundant = true;

                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '*' || top == '/' || top == '-')
                    {
                        Isredundant = false;
                    }
                    st.pop();
                }
                if (Isredundant == true)
                    return true;
                st.pop();
            }
        }
    }

    return false;
}

int main()
{
    string s1 = "()";
    string s2 = "((a+b))";
    string s3 = "(a*b+(b*c))";

    if (isRedundant(s2))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}