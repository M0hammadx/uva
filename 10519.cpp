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
ll OO = LONG_MAX, M = 1e9 + 7;
const double pi = acos(-1);
string add(string a, string b) {
	int sz = max(a.size(), b.size());
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	vi vres(sz + 1), va(a.size()), vb(b.size());
	FI(a.size())
		va[i] = a[i] - 48;
	FI(b.size())
		vb[i] = b[i] - 48;
	int carry = 0;
	FI(sz+1)
	{
		int sum = carry;
		if (i < va.size())
			sum += va[i];
		if (i < vb.size())
			sum += vb[i];
		vres[i] = sum % 10;
		carry = sum / 10;
	}
	string res(vres.begin(), vres.end());
	FI(vres.size())
		res[i] += 48;
	reverse(res.begin(), res.end());
	return res;
}
string mul1(string a, char b) {
	reverse(a.begin(), a.end());
	vi vres(a.size() + 1), va(a.size());
	int bb = b - 48;
	FI(a.size())
		va[i] = a[i] - 48;
	int carry = 0;
	FI(a.size()+1)
	{
		int sum = carry;
		if (i < va.size())
			sum += va[i] * bb;
		vres[i] = sum % 10;
		carry = sum / 10;
	}
	string res(vres.begin(), vres.end());
	FI(vres.size())
		res[i] += 48;
	reverse(res.begin(), res.end());
	return res;

}
string mul(string a, string b) {
	reverse(b.begin(), b.end());
	vi vb(b.size());

	FI(b.size())
		vb[i] = b[i] - 48;
	string res = "0";
	FI(b.size())
	{
		string bla = mul1(a, b[i]);
		res = add(res, bla + string(i, '0'));
	}
	return res;
}
string sub1(string a) {
	if (a == "0")
		return "No";
	reverse(a.begin(), a.end());
	vi va(a.size());
	FI(a.size())
		va[i] = a[i] - 48;
	int end = 0;
	for (int i = 0; i <= end; i++) {
		va[i] -= 1;
		if (va[i] < 0)
			va[i] += 10, end++;
	}
	string res(va.begin(), va.end());
	FI(va.size())
		res[i] += 48;
	reverse(res.begin(), res.end());
	return res;
}
int main() {
	IOS;
	//udebug

	/*while(1) {
	 string a,b;
	 cin>>a>>b;
	 cout<<mul(a,b)<<endl;
	 }*/
	string n;
	while(cin>>n) {
		if(n=="0") {cout<<"1"<<endl;continue;}
		string res=add(mul(n,sub1(n)),"2");
		int done=0;
		FI(res.size()) {
			if(!done&&res[i]=='0')continue;
			if(res[i]!='0')done=1;
			cout<<res[i];
		}
		cout<<endl;
	}
	return 0;
}
