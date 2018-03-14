#include <bits/stdc++.h>
using namespace std;

//////////////////
// Naveen Hegde //
//    BITS H    //
//////////////////

#define int long long
#define uint unsigned long long
#define real long double

#define FastIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ss second
#define ff first
#define pb push_back
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

//#define mod 1000000007

#define trace(x)          cerr<<#x<<": "<<x<<endl
#define trace2(x, y)       cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)    cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl


int32_t main()
{

	    FastIO;
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        #endif

int n,k;
cin >> n >> k;
int x;
int arr[n];
int ansindex=1;
int ans=0;
int compare=0;

for(int i=0;i<k;i++)
{
	cin >> x;

	if((x*((int)n/x))>compare)
	{
		compare=x*((int)n/x);
		ans=n/x;
		ansindex=i+1;
	}

}

cout << ansindex << " " << ans;
return 0;
}