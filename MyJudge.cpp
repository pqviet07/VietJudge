#include <Windows.h>
#include <bits/stdc++.h>
#define COLOR_TRUE "\033[38;5;154m"
#define COLOR_WRONG "\033[38;5;208m"
#define RESET_COLOR "\033[m"

using namespace std;
typedef long long ll;
typedef size_t ull;
const ll INF = 1e9;
const ll rm = RAND_MAX + 1;

#define all(v) (v).begin(), (v).end()
#define REP(i, n) for(size_t i = 0; i < (n); ++i)
#define REPD(i, n) for(size_t i = (n - 1); i >= 0; --i)
#define FOR(i, a, b) for(size_t i = (a); i <= (b); ++i)
#define FORD(i, a, b) for(size_t i = (b); i >= (a); --i)
#define ITER(i, v) for(decltype(v.begin()) i = v.begin(); i != v.end(); ++i)
#define FORE(val, v) for(auto &val : v)
#define print(v) \
    FORE(val, v) \
    cout << val << ' ';

#define umap unordered_map
#define mp make_pair
#define X first
#define Y second
#define point pair<ll, ll>
#define vl vector<ll>
#define vp vector<point>

// name of program
const string NAME = "ABC";
// number of test case
const int tc = 100;

inline ll rd(ll a, ll b)
{
    return a + ((ll)rand() * rm * rm * rm + (ll)rand() * rm * rm + (ll)rand() * rm) % (b - a + 1);
}

inline void tcgenerator()
{
    ofstream cout(NAME + ".INP");
    int n = rd(5, 10);
    cout << n << " " << rd(100, 150) << '\n';
    for(int i = 0; i < n; i++) cout << rd(1, 20) << " ";

    cout.close();
}

int main()
{
    SetConsoleOutputCP(CP_UTF8); // in window.h
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = tc;
    while(t--)
    {
        tcgenerator();

        system((NAME + ".exe").c_str());
        system((NAME + "_2.exe").c_str());

        if(system(("fc " + NAME + ".OUT " + NAME + ".ANS").c_str()) != 0)
        {
            cout << "🧪❤️";
            cout << COLOR_WRONG;
            cout << "Test case #" << tc - t << " ... Wrong Anwser";
            cout << " ahuhu 💩 💩 💩 😥 😥 ❌ ❌\n";
            cout << RESET_COLOR;
            // uncomment below code if u want to stop immediately
            //return 0;
            continue;
        }

        cout << "🧪❤️";
        cout << COLOR_TRUE;
        cout << "Test case #" << tc - t << " ... Accepted";
        cout << " ahihi 😎 😎 👍 🌺 🌺 🌺 ✔️ ✅\n";
        cout << RESET_COLOR;
    }

    return 0;
}