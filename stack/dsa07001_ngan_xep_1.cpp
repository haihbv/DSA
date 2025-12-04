#include <bits/stdc++.h>

#define el '\n'

int main()
{
    // std::cin.tie(0)->sync_with_stdio(0);
    std::stack<int> st;
    std::string s;
    while (std::cin >> s)
    {
        if (s == "push")
        {
            int x;
            std::cin >> x;
            st.push(x);
        }
        else if (s == "pop")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else if (s == "show")
        {
            if (st.empty())
            {
                std::cout << "empty" << el;
            }
            else
            {
                std::stack<int> tmp = st;
                std::vector<int> path;
                while (!tmp.empty())
                {
                    path.push_back(tmp.top());
                    tmp.pop();
                }
                for (int i = path.size() - 1; i >= 0; i--)
                {
                    std::cout << path[i];
                    if (i > 0)
                        std::cout << ' ';
                }
                std::cout << el;
            }
        }
    }
}
