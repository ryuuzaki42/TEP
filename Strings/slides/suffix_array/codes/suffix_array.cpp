#include <bits/stdc++.h>

using namespace std;
using vi = vector<int>;
using ii = pair<int, int>;

template<typename T> void
counting_sort(vi& ps, const T& xs, size_t alphabet_size)
{
    // Gera o histograma dos elementos distintos
    vector<int> hs(alphabet_size, 0);

    for (auto x : xs)
        ++hs[x];

    // Faz a soma prefixada para estabelecer a ordem
    for (size_t i = 1; i < alphabet_size; ++i)
        hs[i] += hs[i - 1];

    // Preenche a permutação referente à ordenação
    for (int i = ps.size() - 1; i >= 0; --i)
        ps[--hs[xs[i]]] = i;
}

template<typename T> int
update_equivalence_classes(vi& cs, const vi& ps, const T& xs)
{
    int c = 0;
    cs[ps[0]] = c;

    // Processa os elementos de s na ordem indicada pela permutação
    for (size_t i = 1; i < ps.size(); ++i)
    {
        // Elementos distintos pertencem a classes distintas
        if (xs[ps[i - 1]] != xs[ps[i]])
            ++c;

        cs[ps[i]] = c;
    }

    // Retorna o número de classes distintas
    return c + 1;
}

vector<int> suffix_array(const string& S)
{
    auto s = S + "$";
    auto N = s.size();

    vector<int> ps(N), cs(N), rs(N), xs(N);
    vector<ii> ys(N);

    // Caso base
    counting_sort(ps, s, 256);
    int c = update_equivalence_classes(cs, ps, s);

    // Transições: mask = 2^(k - 1)
    for (size_t mask = 1; mask < N; mask <<= 1)
    {
        // Atualiza as permutações e gera os pares
        for (size_t i = 0; i < N; ++i) {
            rs[i] = (ps[i] + N - mask) % N;
            xs[i] = cs[rs[i]];
            ys[i] = ii(cs[i], cs[(i + mask) % N]);
        }

        // Gera a permutação que ordena rs, usando as classes xs
        counting_sort(ps, xs, c);

        // Atualiza ps a partir da ordenação de rs
        for (size_t i = 0; i < N; ++i)
            ps[i] = rs[ps[i]];

        // Atualiza cs a partir dos pares de classes de equivalência
        c = update_equivalence_classes(cs, ps, ys);
    }

    ps.erase(ps.begin());

    return ps;
}

int main()
{
    string s;
    cin >> s;

    int N = s.size();
    auto sa = suffix_array(s);

    for (int i = 0; i < N; ++i)
        cout << sa[i] << '\t' << s.substr(sa[i]) << '\n';

    return 0;
}
