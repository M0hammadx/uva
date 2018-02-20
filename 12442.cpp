#include <bits/stdc++.h>
typedef long long ll;
#define view(x,y,z) cout << x << ' ' << y << ' ' << z << endl;
using namespace std;
#define T()	ll tc;	cin>>tc; while(tc--)
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define rep(i, v)       for(int i=0;i<sz(v);++i)
#define all(v)			((v).begin()), ((v).end())
#define sz(v)			((int)((v).size()))
#define clr(v, d) memset(v, d, sizeof(v))
#define FI(n) for(ll i=0;i<n;++i)
#define FJ(n) for(ll j=0;j<n;++j)
#define FK(n) for(int k=0;k<n;++k)
#define rd(n) ll n;scanf("%I64d",&n);
#define rd2(n,k) ll n, k;scanf("%I64d %I64d",&n,&k);
#define rd3(n,k,l) ll n, k,l;scanf("%I64d %I64d %I64d",&n,&k,&l);
#define min3(x,y,z) min(min(x,y),z)
#define max3(x,y,z) max(max(x,y),z)
#define udebug freopen("keys.in","rt",stdin);freopen("ss.txt","wt",stdout);
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll OO = LONG_MAX, M = 1e9 + 7, EPS = 1e6;
const double pi = acos(-1);
int cnt;
const int sz = 1e6;
int vis[sz], f[sz], c[sz];
//vector<vector<int>> v(sz);

int dfs(int node) {
	int v = f[node];
	int r = 0;
	vis[node] = 1;
	if (!vis[v])
		r = dfs(v) + 1;
	vis[node] = 0;
	c[node] = r;
	return r;
}
int main() {
//udebug

	int n, t;
	cin >> t;
	int cs = 1;
	while (t--) {
		cin >> n;
		FI(n)
		{
			int x, y;
			cin >> x >> y;
			f[x - 1] = y - 1;
			vis[x - 1] = 0;
			c[x - 1] = -1;
		}
		int mx = -1, idx = 0;
		FI(n)
		{
			if (c[i] == -1)
				dfs(i);
			if (c[i] > mx)
				mx = c[i], idx = i + 1;

		}
//		FI(n)
//			cout << c[i] << endl;

		//cout << idx; //<< ' ' << mx << endl;
		printf("Case %d: %d", cs++, idx);
		//if (t)
			cout << endl;

	}
	return 0;
}
