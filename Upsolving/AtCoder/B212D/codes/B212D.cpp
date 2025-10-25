#include <bits/stdc++.h>

using namespace std;

template<typename T>
struct VeniceSet
{
    multiset<T> s;
    T delta = 0;

    void emplace(T x) { s.emplace(x + delta); }
    void add_all(T x) { delta -= x; }

    T pop()
    {
        auto m = *s.begin() - delta;
        s.erase(s.begin());
        return m;
    }
};

int main()
{
    ios::sync_with_stdio(false);

    int Q;
    cin >> Q;

    VeniceSet<long long> s;

    while (Q--)
    {
        int cmd;
        long long X;

        cin >> cmd;

        if (cmd == 1)
        {
            cin >> X;
            s.emplace(X);
        } else if (cmd == 2)
        {
            cin >> X;
            s.add_all(X);
        } else 
            cout << s.pop() << '\n';
    }

    return 0;
}
