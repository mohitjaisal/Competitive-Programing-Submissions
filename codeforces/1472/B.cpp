/*
 * Author : Siddhant Khare
 */
#include <bits/stdc++.h>
using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define ll long long
#define ld long double
#define arr array
#define si(t) scanf("%d", &t)
#define sl(t) scanf("%ld", &t)
#define sll(t) scanf("%lld", &t)
#define sc(t) scanf("%c", &t)
#define ss(t) scanf("%s", &t)
#define sf(t) scanf("%f", &t)
#define slf(t) scanf("%lf", &t)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%ld\n", x)
#define pll(x) printf("%lld\n", x)
#define pf(x) printf("%f")
#define sz(x) (int)(x).size()
#define mem(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define REP(i, j) FOR(i, 0, j, 1)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define all(x) x.begin(), x.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define sortall(x) sort(all(x))
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
const double pi = acos(-1.0);
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int, int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

/**************************************/

/******** User-defined Function *******/
void solve()
{
    ll n;
    // scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    // Algorithm

    cin >> n;
    int sum = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        ll u;
        cin >> u;
        sum += u;
        if (u == 1)
            c1++;
        else
            c2++;
    }
    if (sum % 2) {
        cout << "NO\n";
        return;
    }
    sum /= 2;
    if (sum % 2 == 1 && c1)
        c1--, sum--;
    int del = min((sum / 2) * 2, c2 * 2);
    sum -= del;
    del = min(sum, c1);
    sum -= del;
    if (sum > 0)
        cout << "NO\n";
    else
        cout << "YES\n";
    // Output
    // pll(ans) // long long print
}

/**************************************/

/********** Main()  function **********/
int main()
{

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    ll T;
    scanf("%lld", &T);
    while (T--) {
        solve();
    }
}
/********  Main() Ends Here *************/
