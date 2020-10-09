#include <bits/stdc++.h>

#define int long long
#define endl '\n'
#define mod 12345
#define pb push_back
#define fi first
#define se second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define rep(i, l, r) for(int i=(int)(l);i<=(int)(r);i++)
#define repi(i, l, r) for(int i=(int)(l);i>=(int)(r);i--)
#define all(x) x.begin(), x.end()
const int inf = 1e18;

using namespace std;


void solve() {
    int n;
    cin >> n;
    vi v(n);
    rep(i, 0, n - 1)cin >> v[i];

    vi res;
    rep(i, 0, n - 1) {
        auto it = lower_bound(all(res), v[i]);
        if (it == res.end())res.push_back(v[i]);
        else *it = v[i];
    }

    cout << res.size();
}


int32_t main() {
    fastIO
    int t = 1;
//    cin >> t;
    rep(i, 1, t) {
        solve();
    }
}

