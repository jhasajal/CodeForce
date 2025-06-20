#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vs vector<string>
#define vll vector<long long>
#define vpii vector<pair<int, int>>
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define endl '\n'
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define repe(i, a, b) for (int i = a; i <=b; ++i)
#define per(i, a, b) for (int i = b - 1; i >= a; --i)
#define trav(a, x) for (auto& a : x)
#define debug(x) cerr << #x << " = " << x << endl;

const int MOD = 998244353;
const int INF = 1e9;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll mod_exp(ll x, ll y, ll p) {
    ll res = 1;
    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

template <typename T>
class IO {
public:
    void r(T &x) { cin >> x; }
    void w(const T &x) { cout << x << " "; }

    void r(vector<T> &v) { trav(a, v) cin >> a; }
    void w(const vector<T> &v) { trav(a, v) cout << a << " "; cout << endl; }

    template <typename T1, typename T2>
    void r(pair<T1, T2> &p) { cin >> p.F >> p.S; }

    template <typename T1, typename T2>
    void w(const pair<T1, T2> &p) { cout << p.F << " " << p.S << " "; }
};

template <typename T> void sort_(vector<T> &v) { sort(all(v)); }
template <typename T> void sort_d(vector<T> &v) { sort(all(v), greater<T>()); }

void solve() {
    IO<int> io;
    int n; io.r(n);

    if(n%3==0){
        cout<<"Second"<<endl;
        return; 
    }
    else cout<<"First"<<endl;
    return;
}

int main() {
    fastio;
    int t; cin >> t;
    while(t--)solve();
    return 0;
}


// @sajaljha_