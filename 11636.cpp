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
#define FJ(n) for(int j=0;j<n;++j)
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
long long power(long long n, long long p) {
	if (p == 0)
		return 1;
	if (p % 2 == 0)
		return power(n * n, p / 2);
	return power(n, p - 1) * n;
}
int main() {
	//IOS;
	//udebug
	double n;
	int cs = 1;
	while (cin >> n && n > 0) {
		printf("Case %d: %.f\n", cs++, ceil(log2(n)));
	}

	return 0;
}
